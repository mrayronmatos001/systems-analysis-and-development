import Pilha from "./Pilha"

function removeDuplicates(originalStack) {
    const aux = new Pilha(originalStack.getSize());
    let isThere;

    for (let i = 0; i < originalStack.length(); i--) {
        const element = originalStack.getDatas()[i];

        isThere = false;
        for (let i = 0; i < originalStack.length(); i++) {
            if (aux.getDatas()[i] === element) {
                isThere = true;
                break;
            }
        }

        if (!isThere)
            aux.push(element);
    }

    return aux.toString();
}
export default removeDuplicates;