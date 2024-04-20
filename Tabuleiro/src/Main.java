import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

            Jogador jogador1 = new Jogador('O');
            

            System.out.println("----Linhas e Colunas vão de 0 a 4----");
            System.out.print("Jogador 1, digite a casa em qual deseja colocar o pião(Linha/Coluna): ");
            int player1Linha = scanner.nextInt();
            int player1Coluna = scanner.nextInt();
            jogador1.Simbolo(player1Linha, player1Coluna);

            /*System.out.print("Jogador 2, digita a casa em qual deseja colocar o pião(Linha/Coluna): ");
            int player2Linha = scanner.nextInt();
            int player2Coluna = scanner.nextInt();
            jogador1.Simbolo(player2Linha, player2Coluna);*/

            for (int linha = 0; linha < 5; linha++)
            {
                System.out.println();
                for (int coluna = 0; coluna < 5; coluna++) {
                    System.out.print("[" + jogador1.getPosicao(linha, coluna) + jogador2.getPosicao(linha, coluna) + "]");

                }
            }
    }
}
