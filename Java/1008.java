import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner leitor = new Scanner(System.in);

        int numero = leitor.nextInt();
        int h_trab = leitor.nextInt();
        double v_h = leitor.nextDouble();

        double salario = h_trab * v_h;

        System.out.println("NUMBER = " + numero);
        System.out.println(String.format("SALARY = U$ %.2f", salario));
    }
 
}
