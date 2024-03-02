import java.util.Scanner;

public class ValorCarro {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        System.out.println("digite o valor do carro na fabrica");

        float valorCarro = leitor.nextFloat();

        float valorFinal = valorCarro + (valorCarro * (float) (28.0/100.0)) + (valorCarro * (float) (45.0/100.0));

        System.out.println("o valor final = " + valorFinal);

        leitor.close();
    }
}
