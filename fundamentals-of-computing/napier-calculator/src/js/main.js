//entry
const [firstValue, secondValue] = document.querySelectorAll("input")
const [firstValueArr, secondValueArr] = [[...firstValue.value].map(value => parseInt(value)), [...secondValue.value].map(value => parseInt(value))]
const result = document.querySelector("button")
const wrapper = document.querySelector(".wrapper")
const modal = document.querySelector("dialog")
let multPieces = []

//process
result.onclick = calc

function calc() {
    if(isNaN(parseInt(firstValue.value)) || isNaN(parseInt(secondValue.value)))
        alert("informe somente valores numéricos")

    const stickColumns = firstValueArr.map(value => {
        const stick = []
        for (let i = 0; i < 9; i++) {
            stick.push(value * (i+1))
        }
        return stick
    })

    createColumns(stickColumns)

    modal.setAttribute("open", "")

    secondValueArr.forEach(value => document.querySelectorAll(`.s${value}`).forEach(sqd => sqd.classList.add("active")))

    multPieces = findMultiplications(stickColumns)

    const calculation = multPieces.map(piece => {
        if(piece.length === 1) 
            return `(${piece})`
        let res = `(${piece[0][0]})`
        for(let i = 1; i < piece.length; i++) {
            res += `(${parseInt(piece[i-1][1]) + parseInt(piece[i][0])})`
        }
        res += `(${piece[piece.length-1][1]})`
        return res
    })

    const newCalculation = processCalculation(calculation)

    createMathBoard(newCalculation)
}

function createColumns(arr) {
    const columnGroup = document.createElement("div")
    columnGroup.className = "column-group"

    const padStartMode = (num) => String(num).padStart(2, "0")

    columnGroup.innerHTML = arr.reduce((a, c) => a + 
    `<div class="square-column">
        <div class="square s1">${c[0]}</div>
        <div class="square s2">
            <div class="triangle t1">${padStartMode(c[1])[0]}</div>
            <div class="triangle t2">${padStartMode(c[1])[1]}</div>
        </div>
        <div class="square s3">
            <div class="triangle t1">${padStartMode(c[2])[0]}</div>
            <div class="triangle t2">${padStartMode(c[2])[1]}</div>
        </div>
        <div class="square s4">
            <div class="triangle t1">${padStartMode(c[3])[0]}</div>
            <div class="triangle t2">${padStartMode(c[3])[1]}</div>
        </div>
        <div class="square s5">
            <div class="triangle t1">${padStartMode(c[4])[0]}</div>
            <div class="triangle t2">${padStartMode(c[4])[1]}</div>
        </div>
        <div class="square s6">
            <div class="triangle t1">${padStartMode(c[5])[0]}</div>
            <div class="triangle t2">${padStartMode(c[5])[1]}</div>
        </div>
        <div class="square s7">
            <div class="triangle t1">${padStartMode(c[6])[0]}</div>
            <div class="triangle t2">${padStartMode(c[6])[1]}</div>
        </div>
        <div class="square s8">
            <div class="triangle t1">${padStartMode(c[7])[0]}</div>
            <div class="triangle t2">${padStartMode(c[7])[1]}</div>
        </div>
        <div class="square s9">
            <div class="triangle t1">${padStartMode(c[8])[0]}</div>
            <div class="triangle t2">${padStartMode(c[8])[1]}</div>
        </div>
    </div>`, "")

    wrapper.append(columnGroup)
}

function createMathBoard(arr) {
    const board = document.createElement("div")
    board.className = "board"

    function generateHTMLPieces() {
        return transformDecimalBase().reduce((a, c) => a + 
        `<span>${c}</span>
        `, "")
    }

    function transformDecimalBase() {
        const result = []
        for(let i = 0; i < arr.length; i++) {
            result.push(arr[i]*10**(arr.length-1-i))
        }
        return result
    }

    function generateSolution() {
        const sumPieces = transformDecimalBase()
        const solution = sumPieces.reduce((a, c) => a + c, 0)
        return `<span>${solution}</span>`
    }

    board.innerHTML = 
    `<div class="resultBoard">
        <section class="multiplication-area">
            <span>${firstValue.value}</span>
            <span>
                <span class="close material-symbols-outlined">close</span>
                <span>${secondValue.value}</span>
            </span>
        </section>
        <section class="sum-area">
            ${generateHTMLPieces()}
            <span class="add material-symbols-outlined">add</span>
        </section>
        <section class="solution-area">
            ${generateSolution()}
        </section>
    <div>
    `
    wrapper.append(board)
}

function findMultiplications(arr) {
    return secondValueArr.map(v => {
        let aux = []
        for (let column of arr) {
            if(v-1 === 0) {
                aux.push(String(firstValue.value))
                return aux
            } else if(v-1 === -1) {
                aux.push("00")
                return aux
            }
            for(let i = 0; i < column.length; i++){
                if(i === v-1)
                    aux.push(String(column[i]).padStart(2, "0")) 
            }
        }
        return aux
    })
}

function processCalculation(arr) {
    return arr.map(value => {
        if(value.includes("(")) {
            const processedValues = value.split("(").map(v => v.replace(")", "")).filter(Boolean)
            for(let i = processedValues.length - 1; i > 0; i--) {
                if(parseInt(processedValues[i]) >= 10) {
                    [processedValues[i-1], processedValues[i]] = [String((parseInt(processedValues[i-1])+parseInt(processedValues[i][0]))), processedValues[i][1]]
                }
            }
            return(processedValues.join(""))
        }
    })
}