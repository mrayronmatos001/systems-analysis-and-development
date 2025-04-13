import Fila from "./Fila";

function intercalarFilas(f1, f2) {
    const resultado = new Fila(f1.size + f2.size);

    while (!f1.isEmpty() || !f2.isEmpty()) {
        if (!f1.isEmpty()) {
            resultado.enqueue(f1.front());
            f1.dequeue();
        }
        if (!f2.isEmpty()) {
            resultado.enqueue(f2.front());
            f2.dequeue();
        }
    }

    return resultado;
}
export default intercalarFilas;