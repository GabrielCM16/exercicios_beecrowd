import java.util.Scanner;

class Boleto{
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        System.out.println("digite o valor do boleto");

        float boleto = leitor.nextFloat();

        System.out.println("digite o percentual de juros ");

        float juros = leitor.nextFloat();

        System.out.println("digite os dias em atraso");
        
        int dias = leitor.nextInt();

        leitor.close();

        float valor = boleto + (boleto * juros / 100) * dias;

        System.out.println("o valor total é = " + valor);
    }
}