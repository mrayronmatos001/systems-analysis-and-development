class Pilha {
    constructor(size = 5) {
        this.dados = [];
        this.size = size;
        this.topo = 0;
    }
    getSize() {
        return this.size;
    }
    getDatas() {
        return this.dados;
    }
    push(elemento) {
        if (this.isFull()) {
            throw new Error("Stack Overflow");
        }
        this.dados[this.topo] = elemento;
        this.topo++;
    }
    pop() {
        if (this.isEmpty()) {
            throw new Error("Stack underflow");
        }
        const PopedElement = this.dados[this.topo-1];
        this.topo--;
        return PopedElement;
    }
    top() {
        if (!this.isEmpty()) {
            return this.dados[this.topo - 1];
        }
    }
    isEmpty() {
        return this.length() === 0;
    }
    isFull() {
        return this.length() === this.size;
    }
    toString() {
        return this.dados.map(e => e).join("");
     }
    clear() {
        this.topo = 0;
    }
    length() {
        return this.topo;
    }
    changeBaseTop() {
        if (this.length() <= 1) return;
    
        const aux = new Pilha(this.size);
        const topo = this.top();
        this.pop();
        while (this.length() > 1) {
            aux.push(this.top());
            this.pop();
        }
        const base = this.pop();
        this.push(topo);
    
        while (!aux.isEmpty()) {
            this.push(aux.top());
            this.pop();
        }
        this.push(base);
    }
}
export default Pilha;