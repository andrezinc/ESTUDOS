public class Tabuleiro {

    private String[][] tabuleiro; 

    public Tabuleiro(){
        tabuleiro = new String[5][5];
    }

    public void colocarJogador(Jogador jogador, int linha, int coluna) {
        tabuleiro[linha][coluna] = jogador.getSimbolo();
    }

    public void exibirTabuleiro() {
        for (int linha = 0; linha < 5; linha++) {
            System.out.println();
            for (int coluna = 0; coluna < 5; coluna++) {
                System.out.print("[" + (tabuleiro[linha][coluna] != null ? tabuleiro[linha][coluna] : " ") + "]");
            }
        }
    }
}
