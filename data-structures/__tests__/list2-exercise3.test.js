import EmpresaConcreto from "../src/list2-exercise3";

describe('EmpresaConcreto', () => {
  let empresa;

  beforeEach(() => {
    empresa = new EmpresaConcreto(10);
  });

  test('Adiciona caminhoneiros corretamente', () => {
    const msg = empresa.chegadaCaminhoneiro('João');
    expect(msg).toBe('Caminhoneiro João entrou na fila.');
    expect(empresa.listarFila()).toEqual(['João']);
  });

  test('Não permite mais que 10 carregamentos por dia', () => {
    for (let i = 0; i < 10; i++) {
      empresa.chegadaCaminhoneiro(`Motorista ${i}`);
    }
    const extra = empresa.chegadaCaminhoneiro('Extra');
    expect(extra).toBe('Limite de carregamentos do dia atingido.');
  });

  test('Saída respeita ordem de chegada', () => {
    empresa.chegadaCaminhoneiro('A');
    empresa.chegadaCaminhoneiro('B');
    expect(empresa.saidaCaminhoneiro()).toBe('Caminhoneiro A foi carregado e saiu.');
    expect(empresa.saidaCaminhoneiro()).toBe('Caminhoneiro B foi carregado e saiu.');
  });

  test('Não permite saída se a fila estiver vazia', () => {
    expect(empresa.saidaCaminhoneiro()).toBe('Nenhum caminhoneiro na fila.');
  });

  test('Verifica se há caminhoneiros aguardando', () => {
    expect(empresa.existeCaminhoneiroAguardando()).toBe(false);
    empresa.chegadaCaminhoneiro('Carlos');
    expect(empresa.existeCaminhoneiroAguardando()).toBe(true);
  });

  test('Verifica se o limite diário foi atingido', () => {
    for (let i = 0; i < 10; i++) {
      empresa.chegadaCaminhoneiro(`M${i}`);
    }
    for (let i = 0; i < 10; i++) {
      empresa.saidaCaminhoneiro();
    }
    expect(empresa.limiteCarregamentosAtingido()).toBe(true);
  });

  test('Listar fila retorna os nomes corretamente', () => {
    empresa.chegadaCaminhoneiro('X');
    empresa.chegadaCaminhoneiro('Y');
    empresa.saidaCaminhoneiro();
    expect(empresa.listarFila()).toEqual(['Y']);
  });

  test('Reset diário funciona', () => {
    empresa.chegadaCaminhoneiro('João');
    empresa.saidaCaminhoneiro();
    expect(empresa.novoDia()).toBe('Sistema resetado para um novo dia.');
    expect(empresa.listarFila()).toEqual("Nenhum caminhoneiro aguardando.");
    expect(empresa.carregamentosDoDia).toBe(0);
  });
});
