import java.util.Scanner;

public class Circulo {
    public static void main(String[] args) {
         Scanner leitor = new Scanner(System.in);

        System.out.println("digite o raio do circulo");

        double raio = leitor.nextDouble();

        double area = (double) 3.14f * (raio * raio);

        double p = 2 * 3.14 * raio;

         leitor.close();

         System.out.println("a area = " + area);
         System.out.println("o perimetro = " + p);
    }
}
