package exercise4;

public class C5 extends C2 implements I1 {
    private double cpf;

    public C5(String name, int age, double cpf) {
        super(name, age);
        this.cpf = cpf;
    }

    //sobrecarga de construtor
    public C5(String name, double cpf) {
        super(name, 0);
        this.cpf = cpf;
    }

    @Override
    public void helloWorld() {
        System.out.println("Hello!");
    }

    public void showCpf() {
        System.out.println("Show cpf " + cpf);
    }
}
