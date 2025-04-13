import Fila from '../src/Fila.js';
import intercalarFilas from '../src/list2-exercise4.js';

describe('intercalarFilas', () => {
  let f1, f2;

  beforeEach(() => {
    f1 = new Fila(10);
    f2 = new Fila(10);
  });

  test('Intercala filas do mesmo tamanho', () => {
    f1.enqueue(1);
    f1.enqueue(3);
    f1.enqueue(5);

    f2.enqueue(2);
    f2.enqueue(4);
    f2.enqueue(6);

    const resultado = intercalarFilas(f1, f2);

    expect(resultado.front()).toBe(1); resultado.dequeue();
    expect(resultado.front()).toBe(2); resultado.dequeue();
    expect(resultado.front()).toBe(3); resultado.dequeue();
    expect(resultado.front()).toBe(4); resultado.dequeue();
    expect(resultado.front()).toBe(5); resultado.dequeue();
    expect(resultado.front()).toBe(6); resultado.dequeue();
    expect(resultado.isEmpty()).toBe(true);
  });

  test('Intercala quando a primeira fila tem mais elementos', () => {
    f1.enqueue('a');
    f1.enqueue('b');
    f1.enqueue('c');

    f2.enqueue('x');

    const resultado = intercalarFilas(f1, f2);

    expect(resultado.front()).toBe('a'); resultado.dequeue();
    expect(resultado.front()).toBe('x'); resultado.dequeue();
    expect(resultado.front()).toBe('b'); resultado.dequeue();
    expect(resultado.front()).toBe('c'); resultado.dequeue();
    expect(resultado.isEmpty()).toBe(true);
  });

  test('Intercala quando a segunda fila tem mais elementos', () => {
    f1.enqueue(10);

    f2.enqueue(20);
    f2.enqueue(30);
    f2.enqueue(40);

    const resultado = intercalarFilas(f1, f2);

    expect(resultado.front()).toBe(10); resultado.dequeue();
    expect(resultado.front()).toBe(20); resultado.dequeue();
    expect(resultado.front()).toBe(30); resultado.dequeue();
    expect(resultado.front()).toBe(40); resultado.dequeue();
    expect(resultado.isEmpty()).toBe(true);
  });

  test('Intercala filas vazias', () => {
    const resultado = intercalarFilas(f1, f2);
    expect(resultado.isEmpty()).toBe(true);
  });

  test('Intercala uma fila vazia com outra cheia', () => {
    f2.enqueue('z');
    f2.enqueue('y');

    const resultado = intercalarFilas(f1, f2);

    expect(resultado.front()).toBe('z'); resultado.dequeue();
    expect(resultado.front()).toBe('y'); resultado.dequeue();
    expect(resultado.isEmpty()).toBe(true);
  });
});
