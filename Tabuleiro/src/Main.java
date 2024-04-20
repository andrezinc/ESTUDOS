import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        Tabuleiro tabuleiro = new Tabuleiro();
        Inimigo inimigo1 = new Inimigo("X", "\u001B[31m");
        Player player1 = new Player("O", "\u001B[32m");
        int fechar;
        
        do {
            
            System.out.println("---As casas do tabuleiro vão de 0 a 4---");
            System.out.print("Player, digite a casa em que deseja colocar o pião (Linha/Coluna): ");
            int player1Linha = scanner.nextInt();
            int player1Coluna = scanner.nextInt();
            player1.Simbolo(player1Linha, player1Linha);
            tabuleiro.colocarJogador(player1, player1Linha, player1Coluna);
    
            System.out.print("Inimigo, digite a casa em que deseja colocar o pião (Linha/Coluna): ");
            int inimigo1Linha = scanner.nextInt();
            int inimigo1Coluna = scanner.nextInt();
            inimigo1.Simbolo(inimigo1Linha, inimigo1Coluna);
            tabuleiro.colocarJogador(inimigo1, inimigo1Linha, inimigo1Coluna);
    
            tabuleiro.exibirTabuleiro();

            System.out.print("Para sair digite 5 ou qualquer outro número para continuar!");
            fechar = scanner.nextInt();
        } while (fechar != 5);
          scanner.close();
        }
}

