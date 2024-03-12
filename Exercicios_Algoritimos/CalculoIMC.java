import java.util.Scanner;

public class CalculoIMC {
     static Scanner leitor;
    public static void main(String[] args) {
        leitor = new Scanner(System.in);

        float peso = lerFloat("peso");
        float altura = lerFloat("altura em METROS");

        calcularIMC(peso, altura);
        
    }

    public static void calcularIMC(float peso, float altura){
        double imc = peso / Math.pow(altura, 2);

        //System.out.println("o IMC é: " + imc);
        System.out.printf("o IMC é %.2f%n", imc );
    }

    public static float lerFloat(String mensagem){
        System.out.println(mensagem);
        return leitor.nextFloat();
    }

    public static void fechar(){
        leitor.close();
    }
}
