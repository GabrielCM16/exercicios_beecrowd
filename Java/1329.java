import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        
        Scanner leitor = new Scanner(System.in);

        while(true){
		
		int X = leitor.nextInt();
        if (X == 0){
            break;
        }

        int maria = 0;
        int joao = 0;

        for (int i = 0; i < X; i++){

            int entrada = leitor.nextInt();

            if (entrada == 0){
                maria += 1;
            } else { joao += 1;}

        }

        System.out.println("Mary won " + maria + " times and John won " + joao + " times");
        
        }
 
    }
 
}
