import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        scanner.nextLine();  // Consumir a nova linha após o número
        
        char ini = scanner.nextLine().charAt(0);
        int posicao;  // 0 para 'A', 1 para 'B', 2 para 'C'
        
        switch (ini) {
            case 'A': posicao = 0; break;
            case 'B': posicao = 1; break;
            default:  posicao = 2;  
        }
        
        for (int i = 0; i < n; i++) {
            char jogada = scanner.nextLine().charAt(0);
            
            if (jogada == '1' && posicao != 2) {
                posicao = 1 - posicao;  // Troca entre 0 e 1
            } else if (jogada == '2' && posicao != 0) {
                posicao = 3 - posicao;  // Troca entre 1 e 2
            } else if (jogada == '3' && posicao != 1) {
                posicao = 2 - posicao;  // Troca entre 0 e 2
            }
        }

        switch (posicao) {
            case 0: System.out.println("A"); break;
            case 1: System.out.println("B"); break;
            case 2: System.out.println("C"); break;
        }
        
        scanner.close();
    }
}
