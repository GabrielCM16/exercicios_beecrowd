import java.util.Scanner;

public class Desconto {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        System.out.println("digite o valor do desconto");

        float desconto = leitor.nextFloat();

        System.out.println("digite o valor do produto");

        float produto = leitor.nextFloat();

        float valor = produto - (produto * desconto / 100);

        leitor.close();

        System.out.println("o valor do desconto é " + valor);
    }
}
