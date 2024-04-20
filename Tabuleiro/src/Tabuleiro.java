public class Tabuleiro {

    private String[][] tabuleiro;

    public Tabuleiro() {
        tabuleiro = new String[5][5];
    }

    public void colocarJogador(Jogador jogador, int linha, int coluna) {
        if (tabuleiro[linha][coluna] != null) {
            System.out.println("Casa já ocupada coloque novamente!");
        }

        tabuleiro[linha][coluna] = jogador.getSimbolo();
    }

    public void exibirTabuleiro() {
        for (int linha = 0; linha < 5; linha++) {
            System.out.println();
            for (int coluna = 0; coluna < 5; coluna++) {
                if (tabuleiro[linha][coluna] != null) {
                    System.out.print("[ " + tabuleiro[linha][coluna] + " ]");
                } else {
                    System.out.print("[   ]");
                }
            }
        }
        System.out.println();
    }

}
