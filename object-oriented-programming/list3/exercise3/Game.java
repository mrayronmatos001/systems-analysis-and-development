package exercise3;
import java.util.List;
import java.util.ArrayList;
import java.util.Scanner;

public class Game {
    private static List<Player> players = new ArrayList<>();
    private static List<Die> dice = new ArrayList<>();

    private static void startGame(Scanner scanner, Die die1, Die die2, RankingManager rankingManager) {
        System.out.println("O jogo vai começar!");
                for (Player player : players) {
                    int bet;
                    do {
                        System.out.print("jogador " + player.getName() + " informe o valor apostado: ");
                        bet = scanner.nextInt();
                        if (bet < 2 || bet > 12) {
                            System.out.println("valor inválido, informe um valor entre 2 e 12");
                        }
                    } while ( bet < 2 || bet > 12);
                    player.setDiceValue(bet);
                }
                scanner.nextLine();
                rollDice();
                int result = die1.getFaceValue() + die2.getFaceValue();
                System.out.println(result);
                rankingManager.updateRanking(checkWinner(result));
                if(checkWinner(result) == null) {
                    System.out.println("Que pena, ninguém ganhou nessa rodada :(");
                }
    }

    private static void rollDice() {
        for (Die die : dice) {
            die.roll();
        }
    }

    private static String checkWinner(int result) {
        String winner = null;
        for (Player player : players) {
            if (player.getDiceValue() == result) {
                player.setVictories(player.getVictories()+1);
                winner = player.getName();
                System.out.println("Parabéns, " + winner + " ganhou essa rodada!");
                break;
            }
        }
        return winner;
    }

    private static int collectPlayerData(int counterPlayers, Scanner scanner, RankingManager rankingManager, String option) {
        do {
            if (counterPlayers > 10) {
                System.out.println("Número máximo de jogadores atingidos.");
                break;
            }
            System.out.print("informe o nome do jogador: ");
            String name = scanner.nextLine().trim();
            rankingManager.updateRanking(name);
            counterPlayers++;
            System.out.print("Deseja criar mais algum jogador? responda 'não' para encerrar o cadastro: ");
            option = scanner.nextLine().trim().toLowerCase();
        } while (!option.equals("não"));

        return counterPlayers;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int counterPlayers = 0;
        String option = "sim";
        Die die1 = new Die();
        Die die2 = new Die();
        dice.add(die1);
        dice.add(die2);
        RankingManager rankingManager = new RankingManager("./exercise3/data/ranking.txt");

        do {
            rankingManager.printRanking(scanner);
            counterPlayers = rankingManager.getRanking().size();
            System.out.print("Deseja cadastrar algum usuário? responda 'sim' para continuar: ");
            option = scanner.nextLine();
            if (counterPlayers < 10 && option.equals("sim")) {
                counterPlayers = collectPlayerData(counterPlayers, scanner, rankingManager, option);
            }
            System.out.println("counterPlayers: " + counterPlayers);
            players = rankingManager.getPlayersFromRanking();
            if (counterPlayers > 0) {
                startGame(scanner, die1, die2, rankingManager);
            }

        System.out.print("Deseja continuar jogando? responda 'não' para encerrar o jogo: ");
        option = scanner.nextLine().trim().toLowerCase();
        } while(!option.equals("não"));

        System.out.println("Jogo encerrado. Obrigado por jogar!");
    }
}