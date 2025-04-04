import invert from "../src/list1-exercise1.js";

test("Inverte uma string simples", () => {
    expect(invert("cafe")).toBe("efac");
});

test("Inverte uma string com espaços", () => {
    expect(invert("olá mundo")).toBe("odnum álo");
});

test("Inverte string vazia", () => {
    expect(invert("")).toBe("");
});
