import Pilha from './Pilha';

class FilaComDuasPilhas {
    constructor(size = 5) {
        this.pilhaEnfileirar = new Pilha(size);
        this.pilhaDesenfileirar = new Pilha(size);
    }

    buildQueue() {
        if (this.pilhaDesenfileirar.isEmpty()) {
            while (!this.pilhaEnfileirar.isEmpty()) {
                this.pilhaDesenfileirar.push(this.pilhaEnfileirar.pop());
            }
        }
        if (this.pilhaDesenfileirar.isEmpty()) {
            throw new Error("Fila vazia");
        }
    }

    enqueue(elemento) {
        this.pilhaEnfileirar.push(elemento);
    }

    dequeue() {
        this.buildQueue();
        return this.pilhaDesenfileirar.pop();
    }

    front() {
        this.buildQueue();
        return this.pilhaDesenfileirar.top();
    }

    isEmpty() {
        return this.pilhaEnfileirar.isEmpty() && this.pilhaDesenfileirar.isEmpty();
    }

    length() {
        return this.pilhaEnfileirar.length() + this.pilhaDesenfileirar.length();
    }
}

export default FilaComDuasPilhas;
