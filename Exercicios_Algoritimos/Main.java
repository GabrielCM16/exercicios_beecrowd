import java.util.Scanner;

class Main{
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        System.out.println("digite a hora atual");

        int horaAtual = leitor.nextInt();

        System.out.println("digite o minuto atual");

        int minutoAtual = leitor.nextInt();

        System.out.println("digite os segundos");

        int segundos = leitor.nextInt();

        leitor.close();

        long tempo = segundos + minutoAtual * 60 + horaAtual * 60 * 60;

        System.out.println("se passaram ao todo desde 00:00 " + tempo + " segundos");
    }
}