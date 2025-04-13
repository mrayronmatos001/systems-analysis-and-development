function inverterFila(fila) {
    if (fila.isEmpty()) return;
  
    const primeiro = fila.front();
  
    fila.dequeue();
    inverterFila(fila);
  
    fila.enqueue(primeiro);
}
export default inverterFila;