import java.util.Scanner;

public class DiferencaEntreDoisNumeros {
    static Scanner leitor;

    public static void main(String[] args) {
        leitor = new Scanner(System.in);

        int a = lerInt("numero a");
        int b = lerInt("numero b");

        int dif = diferencaAB(a, b);

        saidaDiferenca(dif);

        fechar();
    }

    public static void saidaDiferenca(int dif){
        System.out.println("a diferenca de a e b = " + dif);
    }

    public static int diferencaAB(int a, int b){
        return a - b;
    }
    public static int lerInt(String mensagem){
        System.out.println(mensagem);
        return leitor.nextInt();
    }

    public static void fechar(){
        leitor.close();
    }
    
}
