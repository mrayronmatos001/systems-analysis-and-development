import Pilha from "./Pilha.js";

function decimalToBinary(decimalNumber) {
    if (decimalNumber === 0) return "0";

    const stack = new Pilha(64);

    while (decimalNumber > 0) {
        const remainder = decimalNumber % 2;
        stack.push(remainder);
        decimalNumber = Math.floor(decimalNumber / 2);
    }

    let binary = "";
    while (!stack.isEmpty()) {
        binary += stack.top();
        stack.pop();
    }

    return binary;
}
export default decimalToBinary;
