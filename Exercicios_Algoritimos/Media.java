import java.util.Scanner;

public class Media {
    public static void main(String[] args) {
         Scanner leitor = new Scanner(System.in);

        System.out.println("digite a nota 1");

        float nota1 = leitor.nextFloat();

        System.out.println("digite a nota 2");

        float nota2 = leitor.nextFloat();

        System.out.println("digite a nota 3");

        float nota3 = leitor.nextFloat();

        float media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / (2 + 3 + 5);

         leitor.close();

         System.out.println("a media é " + media);
    }
}
