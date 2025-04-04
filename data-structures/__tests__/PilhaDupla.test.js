import PilhaDupla from "../src/PilhaDupla"

describe('PilhaDupla', () => {
  let pilha;

  beforeEach(() => {
    pilha = new PilhaDupla(3);
  });

  test('inicialmente está vazia', () => {
    expect(pilha.isEmptyA()).toBe(true);
    expect(pilha.isEmptyB()).toBe(true);
    expect(pilha.isFull()).toBe(false);
    expect(pilha.toString()).toBe('[ ] [ ] [ ]');
  });

  test('empilhar em A e B corretamente', () => {
    pilha.pushA('A1');
    pilha.pushB('B1');
    expect(pilha.toString()).toBe('[A:A1] [ ] [B:B1]');
  });

  test('empilhar até encher', () => {
    pilha.pushA('A1');
    pilha.pushB('B1');
    pilha.pushA('A2');
    expect(pilha.isFull()).toBe(true);
    expect(pilha.toString()).toBe('[A:A1] [A:A2] [B:B1]');
  });

  test('erro ao empilhar quando cheia', () => {
    pilha.pushA('A1');
    pilha.pushB('B1');
    pilha.pushA('A2');
    expect(() => pilha.pushB('B2')).toThrow('Stack OverFlow');
  });

  test('pop e toString atualiza corretamente', () => {
    pilha.pushA('A1');
    pilha.pushA('A2');
    pilha.pushB('B1');
    pilha.popA();
    pilha.popB();
    expect(pilha.toString()).toBe('[A:A1] [ ] [ ]');
  });

  test('clear reseta a pilha', () => {
    pilha.pushA('A1');
    pilha.pushB('B1');
    pilha.clear();
    expect(pilha.toString()).toBe('[ ] [ ] [ ]');
    expect(pilha.length()).toBe(0);
  });

  test('pop em pilha vazia lança erro', () => {
    expect(() => pilha.popA()).toThrow('Stack Underflow');
    expect(() => pilha.popB()).toThrow('Stack Underflow');
  });

  test('peek dos topos retorna os valores corretos', () => {
    pilha.pushA('A1');
    pilha.pushB('B1');
    expect(pilha.topAElement()).toBe('A1');
    expect(pilha.topBElement()).toBe('B1');
  });

  test('length calcula corretamente', () => {
    expect(pilha.length()).toBe(0);
    pilha.pushA('X');
    expect(pilha.length()).toBe(1);
    pilha.pushB('Y');
    expect(pilha.length()).toBe(2);
  });
});
