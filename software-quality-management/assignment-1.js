function somarArray(arr) {
    return arr.reduce((acc, val) => acc + val, 0);
}

function numeroPrimo(num) {
    if (num < 2) return false;
    for (let i = 2; i <= Math.sqrt(num); i++) {
        if (num % i === 0) return false;
    }
    return true;
}

function contarVogais(str) {
    return (str.match(/[aeiou]/gi) || []).length;
}

function inverterString(str) {
    return str.split('').reverse().join('');
}

function fatorial(n) {
    if (n === 0 || n === 1) return 1;
    return n * fatorial(n - 1);
}

function maiorNumero(arr) {
    return Math.max(...arr);
}

function palindromo(str) {
    const invertida = str.split('').reverse().join('');
    return str === invertida;
}

function ordenarArray(arr) {
    return arr.sort((a, b) => a - b);
}

function contarOcorrencias(str, char) {
    return str.split('').filter(c => c === char).length;
}

function mediaArray(arr) {
    return arr.reduce((acc, val) => acc + val, 0) / arr.length;
}