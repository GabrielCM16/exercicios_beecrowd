import java.util.Scanner;

public class Raiz {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        int num = leitor.nextInt();

        float raiz = (float) Math.sqrt(num);

        float raizCubica = (float) Math.cbrt(num);

        leitor.close();

        System.out.println("a raiz quadrada é " + raiz + " a raiz cubica é " + raizCubica);
    }
}
