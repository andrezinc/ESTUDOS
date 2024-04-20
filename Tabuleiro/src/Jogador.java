
class Jogador {
    private String simbolo;
    private int posX;
    private int posY;
    private String cor;

    public Jogador(){
        
    }

    public Jogador(String simbolo, String cor) {
        this.simbolo = simbolo;
        this.cor = cor;
    }

    public void Simbolo(int x, int y) {
        this.posX = x;
        this.posY = y;
    }

    public int getPosX() {
        return posX;
    }

    public String getSimbolo() {
        return simbolo;
    }

    public int getPosY() {
        return posY;
    }

    public String getPosicao(int x, int y) {
        if (x == posX && y == posY) {
            return simbolo + cor + "\u001B[0m";
        } else {
            return " ";
        }
    }
}