import java.util.Scanner;

public class AdicionaFive {
    static Scanner leitor;

    public static void main(String[] args) {
         leitor = new Scanner(System.in);

         int a = lerInt("numero");
         int b = adiciona(a);
         System.out.println(b);
    }
    
    public static int adiciona(int n){
        return n + 5;
    }
    public static int lerInt(String mensagem){
        System.out.println(mensagem);
        return leitor.nextInt();
    }

    public static void fechar(){
        leitor.close();
    }
}
