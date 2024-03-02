import java.util.Scanner;

public class Retangulo {
    public static void main(String[] args) {
         Scanner leitor = new Scanner(System.in);

         System.out.println("digite a altura");
         float altura = leitor.nextFloat();

         System.out.println("digite a base");
         float base = leitor.nextFloat();

         leitor.close();

         float area = altura * base;

         float perimetro = 2 * (base * altura);

         System.out.println("a area é " + area );

         System.out.println("o perimetro é " + perimetro);
    }
}
