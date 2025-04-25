import No from "./No";

class Lista {
    constructor() {
        this.head = new No();
    }

    add(elemento) {
        let novoNo = new No(elemento);
        novoNo.proximo = this.head.proximo;
        this.head.proximo = novoNo;
    }
    append(elemento) {
        let novoNo = new No(elemento); 
        if (this.head.proximo !== null) {
            let aux = this.head.proximo;
            while(aux.proximo !== null) {
                aux = aux.proximo;
            }
            aux.proximo = novoNo;
            return;
        }
        this.head.proximo = novoNo; 
    }
    removeLast() {
        if (!this.isEmpty()) {
            let node_a = this.head;
            let node_b = this.head.proximo;
            while (node_b.proximo !== null) {
                node_a = node_b;
                node_b = node_b.proximo;
            }
            node_a.proximo = null;
        }
    }
    removeFirst() {
        if (!this.isEmpty()) {
            let aux;
            aux = this.head.proximo;
            this.head.proximo = aux.proximo;
        }
    }
    isEmpty() {
        return this.head.proximo === null;
    }
    length() {
        let result = 0;
        let node_b = this.head.proximo;
        while (node_b !== null) {
            result++;
            node_b = node_b.proximo;
        }
        return result;
    }
    addAt(elemento, pos) {
        let nodeA = this.head;
        let nodeB = this.head.proximo;
        let index = 0;

        while (nodeB !== null && index < pos) {
            nodeA = nodeB;
            nodeB = nodeB.proximo;
            index++;
        }

        if (index === pos) {
            let novoNo = new No(elemento);
            nodeA.proximo = novoNo;
            novoNo.proximo = nodeB;
        } else {
            throw new Error("Posição inválida");
        }
    }
    removeAt(pos) { 
        let nodeA = this.head;
        let nodeB = this.head.proximo;
        let index = 0;

        while (nodeB !== null && index < pos) {
            nodeA = nodeB;
            nodeB = nodeB.proximo;
            index++;
        }

        if (index === pos) {
            nodeA.proximo=nodeB.proximo;
        } else {
            throw new Error("Posição inválida");
        }
    }
    search(key) {
        let nodeA = this.head;
        let nodeB = this.head.proximo;

        while (nodeB !== null && nodeB.data !== key) {
            nodeA = nodeB;
            nodeB = nodeB.proximo;
        }

        return nodeB !== null;
    }
    toString() {
        let result = '';
        let node_b = this.head.proximo;
        while (node_b !== null) {
            result += node_b.dado;
            node_b = node_b.proximo;
        }
        return result;
    }
}

export default Lista;