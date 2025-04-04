import Fila from "../src/Fila";

let f;

beforeEach(() => {
    f = new Fila();
})



test("Uma fila recem incializada está vazia, não está cheia e o tamanho é zero", () => {
    expect(f.isEmpty()).toBe(true);
    expect(f.isFull()).toBe(false);
    expect(f.length()).toBe(0);
})

test('Após uma série de dados enfileirados, o primeiro elemento deve ser o front', () => {
    f.enqueue(7);
    f.enqueue(3);
    f.enqueue(5);
    expect(f.front()).toBe(7);
    f.dequeue();
    expect(f.front()).toBe(3);
    f.dequeue();
    expect(f.front()).toBe(5);
})

test('Testando as propriedades de uma fila circular', () => {
    f.enqueue('A');
    f.enqueue('B');
    f.enqueue('C');
    f.enqueue('D');
    f.enqueue('E');
    expect(f.isFull()).toBe(true);
    expect(f.length()).toBe(5);
    f.dequeue();
    f.dequeue();
    f.dequeue();
    expect(f.length()).toBe(2);
    f.enqueue('F');
    f.enqueue('G');
    f.enqueue('H');
    expect(f.isFull()).toBe(true);
    expect(f.front()).toBe('D');
    expect(f.length()).toBe(5);
    expect(f.isEmpty()).toBe(false);
})



