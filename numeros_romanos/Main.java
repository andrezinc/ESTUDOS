import java.util.Scanner;
public class Main {
   
    public static void main(String[] args) {
        
        Scanner leitor = new Scanner(System.in);
        
        int[] vNum = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        
        String[] vRomano = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        
        System.out.println("Escreva os númeors que quer converter: ");

        while(true){
            int num = leitor.nextInt();
            if(num == 0) break;
            System.out.printf("O número em romano fica %-1d: ",num);
            int i = 0;
            while (num > 0) {
                if(num >= vNum[i]){
                    System.out.printf(vRomano[i]);       
                }else{
                    i++;
                }
            }
        }
    }
}