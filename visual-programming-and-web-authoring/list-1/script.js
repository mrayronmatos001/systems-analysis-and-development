const buttons1 = document.querySelectorAll("fieldset:first-child button");
const buttons4 = document.querySelectorAll("fieldset:nth-child(3) button");
const button5 = document.querySelector("fieldset:nth-child(4) button");
const button7 = document.querySelector("fieldset:nth-child(6) button");
const button12 = document.querySelector("fieldset:nth-child(11) input[type=button]")
const button13 = document.querySelector("fieldset:nth-child(12) button");
const inputs5 = document.querySelectorAll("fieldset:nth-child(4) input");
const inputs7 = document.querySelectorAll("fieldset:nth-child(6) input");
const input8 = document.querySelector("fieldset:nth-child(7) input");
const inputs9 = document.querySelectorAll("fieldset:nth-child(8) input");
const inputs10 = document.querySelectorAll("fieldset:nth-child(9) input");
const input11 = document.querySelector("fieldset:nth-child(10) input");
const input12 = document.querySelector("fieldset:nth-child(11) input[type='search']");
const input13 = document.querySelector("fieldset:nth-child(12) input");
let values7 = [];
const trs11 = document.querySelectorAll("fieldset:nth-child(10) tbody tr");
const tds10 = document.querySelectorAll("fieldset:nth-child(9) tbody tr td");
const links = document.querySelectorAll("a");
const textarea = document.querySelector("textarea");
const preview = document.querySelector(".text-preview")
const output = document.querySelector(".output");
const output2 = document.querySelector("fieldset:nth-child(12) .output");
const outputSpan = document.querySelector(".output span");
const paragraph = document.querySelector("p");
const paragraph2 = document.querySelector("fieldset:nth-child(5) p");
const paragraph3 = document.querySelector("fieldset:nth-child(7) p");
console.log(button13);

buttons1.forEach(
    btn => {
        btn.onclick = () => {
            paragraph.style.color = btn.className;
        }
    }
)

buttons4.forEach(
    btn => {
        btn.onclick = () => {
            paragraph.style.visibility = btn.classList.contains("show") ? "visible" : "hidden";
        }
    }
)

button5.onclick = e => {
    e.preventDefault();
    window.alert(inputs5[1].value===inputs5[2].value?"valido":"invalido");
}

button7.onclick = () => {
    values7 = Array.from(inputs7).map(input => input.value);

    inputs7.forEach(
        (input, index) => { 
            input.value = values7[values7.length-1-index];
        }
    );
}

button12.onclick = () => {
    preview.innerHTML = textarea.value;
    let value = input12.value.split(' ')[0];
    let regexp = new RegExp(value, 'gi');
    let wordArr = textarea.value.match(regexp);
    if (wordArr != null) {
        let highlightedText = preview.innerHTML.replace(regexp, m => `<span style="background-color:yellow">${m}</span>`);
        preview.innerHTML = highlightedText;
        outputSpan.innerText = `length: ${wordArr.length}`;
        outputSpan.style.backgroundColor = "green";
        outputSpan.style.color = "white";
    } else {
        outputSpan.innerText = "That word doesn't exist";
        outputSpan.style.backgroundColor = "red";
        outputSpan.style.color = "black";
    }
}

button13.onclick = () => {
    const dataFormatter = /\d{2}\/\d{2}\/\d{4}/
    const months = ['January', 'February', 'March', 'April', 'May', 'June', 'July', 'August', 'September', 'Octuber', 'November', 'December']
    let data = input13.value;
    console.log(data);
    let splitData = data.split('/');
    if (dataFormatter.test(data)) {
        output2.innerText = `${splitData[0]} of ${months[splitData[1]-1]} of ${splitData[2]}`;
    } else {
        output2.innerText = "invalid data";
    }

}

links.forEach(
    link => {
        link.onmouseover = e => {
            document.body.style.backgroundColor = e.target.className;
        }
    }
)

inputs5[0].oninput = e => {
    let text = e.target.value;
    paragraph2.innerText = isPalindrome(text)? "is a Palidrome" : "is not a Palidrome";
    if (text === '') paragraph2.innerText = "observing the field username";
}

input8.oninput = e => {
    let text = e.target.value;
    paragraph3.innerText = text.match(/^\d{3}\.\d{3}\.\d{3}-\d{2}$/)? "cpf valid" : "cpf invalid";
    if (text === '') paragraph3.innerText = "observing the cpf's field";
}

for (let i = 0; i < 2; i++) {
    inputs9[i].oninput = () => {
        const input9Value1 = inputs9[0].value;
        const input9Value2 = inputs9[1].value;
        alternation(input9Value1, input9Value2);
    }
}

for (let i = 0; i < 3; i++) {
    inputs10[i].oninput = () => {
        if (inputs10[0].value != '' && inputs10[1].value != '' && inputs10[2].value != '') {
            let num1 = parseInt(inputs10[0].value);
            let num2 = parseInt(inputs10[1].value);
            let num3 = parseInt(inputs10[2].value);
            tds10[0].innerText = inputs10[0].value;
            tds10[1].innerText = inputs10[1].value;
            tds10[2].innerText = inputs10[2].value;
            tds10[3].innerText = sum(num1, num2, num3);
            tds10[4].innerText = average(num1, num2, num3);
            tds10[5].innerText = product(num1, num2, num3);
            tds10[6].innerText = Math.min(num1, num2, num3);
            tds10[7].innerText = Math.max(num1, num2, num3);
        }
    }
}

input11.oninput = () => {
    if (input11.value != '') {
        trs11.forEach(
            (tr, index) => {
                tr.querySelector("td:first-child").innerText = input11.value;
                tr.querySelector("td:nth-child(3)").innerText = index;
                tr.querySelector("td:nth-child(5)").innerText = parseInt(input11.value)*index;
            }
        )
    } else {
        trs11.forEach(
            tr => {
                tr.querySelector("td:first-child").innerText = '';
                tr.querySelector("td:nth-child(3)").innerText = '';
                tr.querySelector("td:nth-child(5)").innerText = '';
            }
        )
    }
}

textarea.oninput = () => {
    preview.innerText = textarea.value;
}

function isPalindrome(str) {
    const cleanedStr = str.replace(/[^a-z0-9]/gi, '').toLowerCase();
    return cleanedStr === cleanedStr.split('').reverse().join('');
}

function alternation(value1, value2) {
    let result='';
    let length = Math.max(value1.length, value2.length);

    for (let i = 0; i < length; i++) {
        if (i < value1.length) {
            result += value1[i];
        }
        if (i < value2.length) {
            result += value2[i];
        }
    }

    inputs9[2].value = result;
}

function sum(value1, value2, value3) {
    return value1 + value2 + value3;
}

function average(value1, value2, value3) {
    return sum(value1, value2, value3) / 3;
}

function product(value1, value2, value3) {
    return value1 * value2 * value3;
}