class EmpresaConcreto {
    constructor(capacidadeMaxima = 10) {
      this.fila = [];
      this.inicioFila = 0;
      this.carregamentosDoDia = 0;
      this.capacidadeMaxima = capacidadeMaxima;
    }
  
    chegadaCaminhoneiro(nome) {
      if (this.carregamentosDoDia >= this.capacidadeMaxima || this.fila.length === 10) {
        console.log(this.carregamentosDoDia);
        return "Limite de carregamentos do dia atingido.";
      }

      this.fila.push(nome);
      return `Caminhoneiro ${nome} entrou na fila.`;
    }
  
    saidaCaminhoneiro() {
      if (this.inicioFila >= this.fila.length) {
        return "Nenhum caminhoneiro na fila.";
      }
  
      if (this.carregamentosDoDia >= this.capacidadeMaxima) {
        return "Limite de carregamentos do dia já foi atingido.";
      }
  
      const nome = this.fila[this.inicioFila];
      this.inicioFila++;
      this.carregamentosDoDia++;
      return `Caminhoneiro ${nome} foi carregado e saiu.`;
    }
  
    existeCaminhoneiroAguardando() {
      return this.inicioFila < this.fila.length;
    }
  
    limiteCarregamentosAtingido() {
      return this.carregamentosDoDia >= this.capacidadeMaxima;
    }
  
    listarFila() {
      if (!this.existeCaminhoneiroAguardando()) {
        return "Nenhum caminhoneiro aguardando.";
      }
  
      const filaAtual = [];
      for (let i = this.inicioFila; i < this.fila.length; i++) {
        filaAtual.push(this.fila[i]);
      }
      return filaAtual.length > 0 ? filaAtual : "Nenhum caminhoneiro aguardando.";
    }
  
    novoDia() {
      this.fila = [];
      this.inicioFila = 0;
      this.carregamentosDoDia = 0;
      return "Sistema resetado para um novo dia.";
    }
  }

  export default EmpresaConcreto;
  