# Atv06

Dados os valores de um depósito fixo mensal e um montante desejado, crie uma classe para determinar quantos meses serão necessários para acumular o montante desejado, considerando juros mensais de 0,5%.


IFPR - Campus Cascavel

Aluno: Gabriel Costa de Moraes

Turma: 3° INF 2023

Disciplina: Programação orientada a Objetos Professor: Nelson Bellincanta

```
import java.util.Scanner;

public class JurosMensais // Declaração da classe JurosMensais
{
    // Início da classe JurosMensais 
    // Declaracao do método main que inicia a execução do programa 
	public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in); //prepara a entrada de dados criando o objeto leitor ultilizando o Scanner
		
		System.out.println("Insira o valor de depositos mensais"); //mensagem de orientação
		double deposito = leitor.nextDouble(); //delcrando e atribuindo valores as variaveis
		
		System.out.println("Insira o valor do montante_desejado"); //mensagem de orientação
		double montante_desejado = leitor.nextDouble(); //delcrando e atribuindo valores as variaveis
		
		double montante_atual = 0; //declaração e inicialização da variavel montante_atual
		
		int meses_necessarios = 0; //declaração e inicialização da variavel meses_necessarios
		
		while (montante_atual < montante_desejado){
		    meses_necessarios++; //meses_necessarios recebe mais um para considerar que se passou um mes
		    
		    montante_atual += deposito + (montante_atual * 0.05); 
		    //atualizando o montante_atual com o valor depositado mensalmente mais 5% de juros mensais 
		    
		    System.out.println("Mês:" + meses_necessarios + ", montante_atual = " + montante_atual);
		}
		
		System.out.println(); //organizando a visualização da saida
		
		//saida para orientação
		System.out.println("São necessarios " + meses_necessarios + " meses para alcançar o montante de: " + montante_desejado);
		System.out.println("Com juros mensais de: 5%");
		
	}
} // fim da classe JurosMensais

```
