import Fila from '../src/Fila.js';
import inverterFila from '../src/list2-exercise6.js';

describe('inverterFila', () => {
  test('inverte fila com múltiplos elementos', () => {
    const fila = new Fila(5);
    fila.enqueue(1);
    fila.enqueue(2);
    fila.enqueue(3);
    fila.enqueue(4);
    fila.enqueue(5);

    inverterFila(fila);

    expect(fila.front()).toBe(5); fila.dequeue();
    expect(fila.front()).toBe(4); fila.dequeue();
    expect(fila.front()).toBe(3); fila.dequeue();
    expect(fila.front()).toBe(2); fila.dequeue();
    expect(fila.front()).toBe(1); fila.dequeue();

    expect(fila.isEmpty()).toBe(true);
  });

  test('fila com um único elemento permanece igual', () => {
    const fila = new Fila(5);
    fila.enqueue(42);

    inverterFila(fila);

    expect(fila.front()).toBe(42);
    fila.dequeue();
    expect(fila.isEmpty()).toBe(true);
  });

  test('fila vazia continua vazia', () => {
    const fila = new Fila(5);

    inverterFila(fila);

    expect(fila.isEmpty()).toBe(true);
  });
});
