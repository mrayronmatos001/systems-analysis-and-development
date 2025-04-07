import Pilha from './Pilha.js';

function infixToRPN(expression) {
    const precedence = {
        '^': 4,
        '*': 3,
        '/': 3,
        '+': 2,
        '-': 2
    };

    const associativity = {
        '^': 'right',
        '*': 'left',
        '/': 'left',
        '+': 'left',
        '-': 'left'
    };

    const output = [];
    const operadores = new Pilha(100);

    const tokens = expression.replace(/\s+/g, '').split('');

    for (let token of tokens) {
        if (/[a-z]/i.test(token)) {
            output.push(token);
        } else if ('^*/+-'.includes(token)) {
            while (
                !operadores.isEmpty() &&
                '^*/+-'.includes(operadores.top()) &&
                (
                    (associativity[token] === 'left' &&
                        precedence[token] <= precedence[operadores.top()]) ||
                    (associativity[token] === 'right' &&
                        precedence[token] < precedence[operadores.top()])
                )
            ) {
                output.push(operadores.top());
                operadores.pop();
            }
            operadores.push(token);
        } else if (token === '(') {
            operadores.push(token);
        } else if (token === ')') {
            while (!operadores.isEmpty() && operadores.top() !== '(') {
                output.push(operadores.top());
                operadores.pop();
            }
            operadores.pop();
        }
    }

    while (!operadores.isEmpty()) {
        output.push(operadores.top());
        operadores.pop();
    }

    return output.join('');
}
export default infixToRPN;