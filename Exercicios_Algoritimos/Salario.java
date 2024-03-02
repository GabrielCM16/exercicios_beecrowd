import java.util.Scanner;

public class Salario {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        System.out.println("digite o valor do salario");

        float salario = leitor.nextFloat();

        System.out.println("digite a porcentagem do aumento");

        float porcentagem = leitor.nextFloat();

        float valor = salario + (salario * porcentagem / 100);

        leitor.close();

        System.out.println("o valor do aumento é " + valor);
    }
}
