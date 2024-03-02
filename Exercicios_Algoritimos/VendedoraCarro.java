import java.util.Scanner;

public class VendedoraCarro {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        System.out.println("digite o valor das vendas");

        float valorVendas = leitor.nextFloat();

        System.out.println("digite o salario fixo");

        float salarioFixo = leitor.nextFloat();

        float salarioFinal = salarioFixo + (valorVendas * (float) (5.0/100.0));

        leitor.close();

        System.out.println("o salario final é = " + salarioFinal);
    }
}
