class PilhaDupla {
    constructor(size = '3') {
        this.datas = new Array(size).fill(undefined);
        this.size = size;
        this.topA = -1;
        this.topB = size;
    }

    throwStackOverFlow() {
        if (this.isFull()) {
            throw new Error("Stack OverFlow");
        }
    }
    isFull() {
        return this.topA + 1 === this.topB
    }
    isEmptyA() {
        return this.topA === -1;
    }
    isEmptyB() {
        return this.topB === this.size;
    }
    pushA(element) {
        this.throwStackOverFlow();
        this.datas[++this.topA] = element;
    }
    pushB(element) {
        this.throwStackOverFlow();
         this.datas[--this.topB] = element;
    }
    popA() {
        if (this.isEmptyA()) {
            throw new Error("Stack Underflow");
        }
        this.topA--;
    }
    popB() {
        if (this.isEmptyB()) {
            throw new Error("Stack Underflow");
        }
        this.topB++;
    }
    topAElement() {
        if (!this.isEmptyA()) {
            return this.datas[this.topA]
        }
    }
    topBElement() {
        if (!this.isEmptyB()) {
            return this.datas[this.topB]
        }
    }
    toString() {
        return this.datas.map((val, i) => {
            if (i <= this.topA) {
                return `[A:${val}]`
            } else if (i >= this.topB) {
                return `[B:${val}]`
            } else {
                return `[ ]`
            }
        }).join(" ");
    }
    clear() {
        this.topA = -1;
        this.topB = this.size;
    }
    length() {
        return this.topA + 1 + this.size - this.topB;
    }
}
export default PilhaDupla;