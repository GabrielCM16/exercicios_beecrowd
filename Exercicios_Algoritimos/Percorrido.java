import java.util.Scanner;

public class Percorrido {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        System.out.println("digite os km percorrido");
        float km = leitor.nextFloat();

        System.out.println("digite os dias percorridos");

        int dias = leitor.nextInt();

        float valor = dias * 60 + km * 0.15f;

        System.out.println("o valor total a ser pago é " + valor);

        leitor.close();

    }
}
