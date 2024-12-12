package exercise3;
import java.io.*;
import java.util.*;

public class RankingManager {
    private final String rankingFile; 
    private Map<String, Integer> ranking;
    
    public RankingManager(String rankingFile) {
        this.rankingFile = rankingFile;
        ranking = new HashMap<>();
        loadRanking();
    }

    public Map<String, Integer> getRanking() {
        return ranking;
    }

    public void setRanking(Map<String, Integer> ranking) {
        this.ranking = ranking;
    }

    public void loadRanking() {
        try (BufferedReader reader = new BufferedReader(new FileReader(rankingFile))) {
            String line;
            while ((line = reader.readLine()) != null) {
                String[] parts = line.split(":");
                if (parts.length == 2) {
                    String playerName = parts[0].trim();
                    int victories = Integer.parseInt(parts[1].trim());
                    ranking.put(playerName, victories);
                }
            }
        } catch (FileNotFoundException e) {
            System.out.println("Arquivo de ranking não encontrado. Criando um novo");
        } catch (IOException e) {
            System.err.println("Erro ao ler o arquivo do ranking: " + e.getMessage());
        }
    }

    private void saveRanking() {
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(rankingFile))) {
            for (Map.Entry<String, Integer> entry : ranking.entrySet()) {
                writer.write(entry.getKey() + ":" + entry.getValue());
                writer.newLine();
            }
        } catch(IOException e) {
            System.err.println("Erro ao salvar o ranking: " + e.getMessage());
        }
    }

    public void updateRanking(String playerName) {
        if (playerName != null && !playerName.trim().isEmpty()) {
            ranking.put(playerName, ranking.getOrDefault(playerName, -1) + 1);
            saveRanking();
        }
        
    }

    public List<Map.Entry<String, Integer>> getTopFive() {
        return ranking.entrySet()
                        .stream()
                        .sorted((a,b) -> b.getValue()
                        .compareTo(a.getValue()))
                        .limit(5)
                        .toList();
    }

    public void printRanking(Scanner scanner) {
        System.out.println("Ranking Atual: ");
        getTopFive().forEach(entry -> System.out.println(entry.getKey() + " - " + entry.getValue() + " vitória(s)"));
        System.out.println("\nPressione Enter para continuar...");
        scanner.nextLine();
    }

    public List<Player> getPlayersFromRanking() {
        List<Player> players = new ArrayList<>();
        for (Map.Entry<String, Integer> entry : ranking.entrySet()) {
            Player player = new Player(entry.getKey());
            player.setVictories(entry.getValue());
            players.add(player);
        }
        return players;
    }
}