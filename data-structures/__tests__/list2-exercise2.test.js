import FilaComDuasPilhas from '../src/list2-exercise2';

describe('FilaComDuasPilhas', () => {
    let fila;

    beforeEach(() => {
        fila = new FilaComDuasPilhas(10);
    });

    test('fila vazia deve retornar true para isEmpty()', () => {
        expect(fila.isEmpty()).toBe(true);
    });

    test('enqueue adiciona elementos corretamente', () => {
        fila.enqueue(10);
        fila.enqueue(20);
        expect(fila.isEmpty()).toBe(false);
        expect(fila.length()).toBe(2);
    });

    test('dequeue retorna elementos na ordem correta (FIFO)', () => {
        fila.enqueue(1);
        fila.enqueue(2);
        fila.enqueue(3);
        expect(fila.dequeue()).toBe(1);
        expect(fila.dequeue()).toBe(2);
        expect(fila.dequeue()).toBe(3);
        expect(fila.isEmpty()).toBe(true);
    });

    test('front retorna o primeiro elemento sem removê-lo', () => {
        fila.enqueue('A');
        fila.enqueue('B');
        expect(fila.front()).toBe('A');
        expect(fila.length()).toBe(2);
    });

    test('dequeue em fila vazia deve lançar erro', () => {
        expect(() => fila.dequeue()).toThrow("Fila vazia");
    });

    test('front em fila vazia deve lançar erro', () => {
        expect(() => fila.front()).toThrow("Fila vazia");
    });

    test('enqueue e dequeue alternados funcionam corretamente', () => {
        fila.enqueue('X');
        expect(fila.dequeue()).toBe('X');
        fila.enqueue('Y');
        fila.enqueue('Z');
        expect(fila.dequeue()).toBe('Y');
        fila.enqueue('W');
        expect(fila.front()).toBe('Z');
        expect(fila.dequeue()).toBe('Z');
        expect(fila.dequeue()).toBe('W');
        expect(fila.isEmpty()).toBe(true);
    });
});
