import Fila from './Fila';

class PilhaComDuasFilas {
    constructor(size = 5) {
        this.fila1 = new Fila(size);
        this.fila2 = new Fila(size);
        this.size = size;
        this.topo = null;
    }

    push(elemento) {
        if (this.isFull()) throw new Error("Stack overflow");
        this.fila2.enqueue(elemento);
        this.topo = elemento;
        
        while (!this.isEmpty()) {
            this.fila2.enqueue(this.fila1.front());
            this.fila1.dequeue();
        }
        
        [this.fila1, this.fila2] = [this.fila2, this.fila1];
    }

    pop() {
        if (this.isEmpty()) throw new Error("Stack underflow");
        this.fila1.dequeue();
        this.topo = this.fila1.isEmpty() ? null : this.fila1.front();
    }

    peek() {
        if (this.isEmpty()) throw new Error("Stack is empty");
        return this.topo;
    }

    isEmpty() {
        return this.fila1.isEmpty();
    }

    isFull() {
        return this.fila1.isFull();
    }

    length() {
        return this.fila1.length();
    }
}

export default PilhaComDuasFilas;
