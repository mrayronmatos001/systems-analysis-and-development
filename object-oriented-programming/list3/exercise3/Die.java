package exercise3;
import java.util.Random;

public class Die {
    private int faceValue;

    public Die() {
        faceValue = 1;
    }

    public int getFaceValue() {
        return faceValue;
    }

    public void setFaceValue(int faceValue) {
        this.faceValue = faceValue;
    }

    public int roll() {
        Random random = new Random();
        faceValue = random.nextInt(6) + 1;
        return faceValue;
    }

    @Override
    public String toString() {
        return "Die [faceValue=" + faceValue + "]";
    }
}
