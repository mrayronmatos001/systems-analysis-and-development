import Deque from "../src/list2-exercise5";

describe('Classe Deque', () => {
  let deque;

  beforeEach(() => {
    deque = new Deque(5);
  });

  describe('inserirInicio', () => {
    test('deve inserir elementos na cabeça', () => {
      deque.inserirInicio(1);
      deque.inserirInicio(2);
      expect(deque.items[0]).toBe(1);
      expect(deque.items[1]).toBe(2);
      expect(deque.quantidade).toBe(2);
    });

    test('deve lançar erro ao inserir com deque cheio', () => {
      for (let i = 0; i < 5; i++) {
        deque.inserirInicio(i);
      }
      expect(() => deque.inserirInicio(99)).toThrow("Deque está cheio");
    });
  });

  describe('removerInicio', () => {
    test('deve remover elementos da cabeça', () => {
      deque.inserirInicio(10);
      deque.inserirInicio(20);
      deque.removerInicio();
      expect(deque.items[0]).toBe(20);
      expect(deque.quantidade).toBe(1);
    });

    test('deve lançar erro ao remover de deque vazio', () => {
      expect(() => deque.removerInicio()).toThrow("Deque está vazio na cabeça");
    });
  });

  describe('inserirFim', () => {
    test('deve inserir elementos na cauda', () => {
      deque.inserirFim(5);
      deque.inserirFim(6);
      expect(deque.items[4]).toBe(5);
      expect(deque.items[3]).toBe(6);
      expect(deque.quantidade).toBe(2);
    });

    test('deve lançar erro ao inserir com deque cheio', () => {
      for (let i = 0; i < 5; i++) {
        deque.inserirFim(i);
      }
      expect(() => deque.inserirFim(99)).toThrow("Deque está cheio");
    });
  });

  describe('removerFim', () => {
    test('deve remover elementos da cauda', () => {
      deque.inserirFim(7);
      deque.inserirFim(8);
      deque.removerFim();
      expect(deque.items[4]).toBe(8);
      expect(deque.quantidade).toBe(1);
    });

    test('deve lançar erro ao remover de deque vazio', () => {
      expect(() => deque.removerFim()).toThrow("Deque está vazio na cauda");
    });
  });

  describe('estaVazio e estaCheio', () => {
    test('deve retornar verdadeiro quando vazio', () => {
      expect(deque.estaVazio()).toBe(true);
    });

    test('deve retornar verdadeiro quando cheio', () => {
      deque.inserirInicio(1);
      deque.inserirInicio(2);
      deque.inserirFim(3);
      deque.inserirFim(4);
      deque.inserirInicio(5);
      expect(deque.estaCheio()).toBe(true);
    });
  });
});
