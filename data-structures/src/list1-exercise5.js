import Pilha from "./Pilha";

function isWellFormatted(str) {
    const stack = new Pilha(str.length);

    for (let i = 0; i < str.length; i++) {
        let char = str[i];

        if (char === "(" || char === "[") {
            stack.push(char);
        } else if (char === ")" || char === "]") {
            if (stack.isEmpty() === true) return false;

            let top = stack.top();

            if (char === ")" && top === "(" || char === "]" && top === "[") {
                stack.pop();
            } else {
                return false;
            }
        }
    }

    return stack.isEmpty();
}

export default isWellFormatted;