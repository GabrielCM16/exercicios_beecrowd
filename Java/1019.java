import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner leitor = new Scanner(System.in);

        int segundos = leitor.nextInt();

        int h = segundos / 3600;
        segundos = segundos % 3600;
        int m = segundos / 60;
        segundos = segundos % 60;

        System.out.println(h + ":" + m + ":" + segundos);
 
    }
 
}
