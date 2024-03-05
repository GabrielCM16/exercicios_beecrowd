import java.util.Scanner;

public class TempoJogo {
    static Scanner leitor;
    public static void main(String[] args) {
        int hora_inicio = lerInt("hora do inicio do jogo");
        int hora_fim = lerInt("hora do fim do jogo");
        int minuto_inicio = lerInt("minuto do inicio do jogo");
        int minuto_fim = lerInt("minuto do fim do jogo");

        mostrarTempoJogo(hora_inicio, hora_fim, minuto_inicio, minuto_fim);
        
    }

    public static void mostrarTempoJogo(int hora_inicio, int hora_fim, int minuto_inicio, int minuto_fim) {
        int total = (hora_inicio * 60 + minuto_inicio) - (hora_fim * 60 + minuto_fim);
        System.out.println("o tempo total de jogo foi: " + total);
    }

    public static int lerInt(String mensagem){
        System.out.println(mensagem);
        return leitor.nextInt();
    }

    public static void fechar(){
        leitor.close();
    }
}
