
class Jogador {
    private char simbolo;
    private int posX;
    private int posY;

    public Jogador(char desenho) {
        this.simbolo = desenho;
    }

    public void Simbolo(int x, int y) {
        this.posX = x;
        this.posY = y;
    }

    public char getPosicao(int x, int y) {
        if (x == posX && y == posY) {
            return simbolo;
        } else {
            return ' ';
        }
    }
}