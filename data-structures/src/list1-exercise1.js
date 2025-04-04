import Pilha from "./Pilha.js"

function invert(str='') {
    const pilha = new Pilha(str.length);

    for (let char of str) {
        pilha.push(char);
    }

    let reversedStr = '';

    while(!pilha.isEmpty()) {
        reversedStr += pilha.top();
        pilha.pop();
    }

    return reversedStr;
}

export default invert;