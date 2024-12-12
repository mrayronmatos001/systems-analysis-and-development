package exercise4;

public class Principal {
    public static void main(String[] args) {
        C2 c2 = new C2("Ayron", 27);
        C3 c3 = new C3("Josenalde", 1.73f);
        C4 c4 = new C4("Guilherme", 27, 1.70f);
        C5 c5 = new C5("Mateo", 24, 000000000000f);

        c2.calcBornBirth();
        c2.calcBornBirth(2025);
        c2.displayMessage();
        c2.showName();
        c3.displayMessage();
        c3.showName();
        c3.helloWorld();
        c3.sum(10, 20);
        c3.sayGoodMorning();
        c3.ImGoku();
        c4.displayMessage();
        c4.showName();
        c4.infoWeight();
        c5.displayMessage();
        c5.showName();
        c5.showCpf();
    }
}
