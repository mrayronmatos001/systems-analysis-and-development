package exercise4;

public class C3 extends C1  implements I1,I2 {
    private float height;

    public C3(String name, float height) {
        super(name);
        this.height = height;
    }

    @Override
    public void displayMessage() {
        System.out.println("C3 Class's Message: Hi there, " + name + "!");
    }

    @Override
    public void helloWorld() {
        System.out.println("Hello!");
    }

    @Override
    public int sum(int num1, int num2) {
        return num1 + num2;
    }

    @Override
    public void sayGoodMorning() {
        System.out.println("Good Morning!");
    }

    public void ImGoku() {
        System.out.println("Oi, eu sou o Goku");
    }
}
