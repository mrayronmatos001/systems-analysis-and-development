class Deque {
    constructor(tamanhoMaximo) {
      this.tamanhoMaximo = tamanhoMaximo;
      this.items = new Array(tamanhoMaximo);
      this.fimCabeca = -1;
      this.fimCauda = tamanhoMaximo;
      this.quantidade = 0;
    }
  
    estaVazio() {
      return this.quantidade === 0;
    }
  
    estaCheio() {
      return this.quantidade === this.tamanhoMaximo;
    }
  
    inserirInicio(elemento) {
      if (this.estaCheio()) {
        throw new Error("Deque está cheio");
      }
  
      this.fimCabeca++;
      this.items[this.fimCabeca] = elemento;
      this.quantidade++;
    }
  
    removerInicio() {
      if (this.estaVazio()) {
        throw new Error("Deque está vazio na cabeça");
      }
  
      if (this.quantidade < this.tamanhoMaximo) {
        for (let i = 0; i < this.fimCabeca; i++) {
          this.items[i] = this.items[i + 1];
        }
  
        this.fimCabeca--;
        this.quantidade--;
      }
    }
  
    inserirFim(elemento) {
      if (this.estaCheio()) {
        throw new Error("Deque está cheio");
      }
  
      this.fimCauda--;
      this.items[this.fimCauda] = elemento;
      this.quantidade++;
    }
  
    removerFim() {
      if (this.estaVazio()) {
        throw new Error("Deque está vazio na cauda");
      }
  
      if (this.quantidade < this.tamanhoMaximo) {
        for (let i = this.fimCauda; i < this.tamanhoMaximo - 1; i++) {
          this.items[i + 1] = this.items[i];
        }
  
        this.fimCauda++;
        this.quantidade--;
      }
    }
  
    imprimir() {
      const resultado = [];
  
      for (let i = 0; i <= this.fimCabeca; i++) {
        resultado.push(this.items[i]);
      }
  
      for (let i = this.fimCauda; i < this.tamanhoMaximo; i++) {
        resultado.push(this.items[i]);
      }
  
      console.log(resultado.join(" <- "));
    }
}
export default Deque;