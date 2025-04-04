import PilhaDupla from "./PilhaDupla"
const p1 = new PilhaDupla(5);
function EVaziaA() {
    if (p1.isEmptyA()) 
        return "Pilha está vazia em A";
}

function EVaziaB() {
    if (p1.isEmptyB()) {
        return "Pilha está vazia em B";
    }
}
