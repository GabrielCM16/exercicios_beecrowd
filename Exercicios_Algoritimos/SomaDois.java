import java.util.Scanner;

public class SomaDois {
    static Scanner leitor;

    public static void main(String[] args) {
        leitor = new Scanner(System.in);

        int a = lerInt("numero a");
        int b = lerInt("numero b");

        int soma = soma(a,b);

        saidaSoma(soma);

    }

    public static void saidaSoma(int soma){
        System.out.println("a soma de a + b = " + soma);
    }

    public static int soma(int a, int b){
        return a + b;
    }
    public static int lerInt(String mensagem){
        System.out.println(mensagem);
        return leitor.nextInt();
    }

    public static void fechar(){
        leitor.close();
    }
    
}