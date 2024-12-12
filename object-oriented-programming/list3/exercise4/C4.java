package exercise4;

public class C4 extends C2 {
    private float weight;

    public C4(String name, int age, float weight) {
        super(name, age);
        this.weight = weight;
    }

    public void infoWeight() {
        System.out.println("Meu peso é " + weight);
    }
}
