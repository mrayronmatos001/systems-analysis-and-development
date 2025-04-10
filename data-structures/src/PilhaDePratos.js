import Pilha from "./Pilha"

class PilhaDePratos {
    constructor(capacity) {
        this.capacity = capacity;
        this.stacks = [new Pilha(capacity)];
    }

    push(value) {
        let last = this.stacks[this.stacks.length - 1];
        if (last.isFull()) {
            const newStack = new Pilha(this.capacity);
            newStack.push(value);
            this.stacks.push(newStack);
        } else {
            last.push(value);
        }
    }

    pop() {
        while (this.stacks.length > 0) {
            let last = this.stacks[this.stacks.length - 1];
            if (!last.isEmpty()) {
                return last.pop();
            } else {
                this.stacks.pop();
            }
        }
        return null;
    }
}
export default PilhaDePratos;