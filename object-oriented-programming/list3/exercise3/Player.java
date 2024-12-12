package exercise3;

public class Player {
    private String name;
    private int diceValue;
    private int victories;

    public Player(String name) {
        this.name = name;
        diceValue = 0;
        victories = 0;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getDiceValue() {
        return diceValue;
    }

    public void setDiceValue(int diceValue) {
        this.diceValue = diceValue;
    }

    public int getVictories() {
        return victories;
    }

    public void setVictories(int victories) {
        this.victories = victories;
    }

    public void incrementVictory() {
        victories += 1;
    }

    @Override
    public String toString() {
        return "Player [name=" + name + ", diceValue=" + diceValue + ", victories=" + victories + "]";
    }
}
