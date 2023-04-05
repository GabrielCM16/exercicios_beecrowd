import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        double pi = 3.14159;
        Scanner leitor = new Scanner(System.in);
        double A = leitor.nextDouble();
        double area = pi * Math.pow(A, 2);
        System.out.println(String.format("A=%.4f", area));
 
    }
 
}
