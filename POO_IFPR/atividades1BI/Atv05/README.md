# Atv05

Adicione a Atv04 (sem alterar as linhas existentes) o cálculo para a média mensal de gastos, criando uma variável mediaMensal junto com uma mensagem. Para isso, concatene a String com o valor, usando "Valor da média mensal = " + mediaMensal.

IFPR - Campus Cascavel

Aluno: Gabriel Costa de Moraes

Turma: 3° INF 2023

Disciplina: Programação orientada a Objetos Professor: Nelson Bellincanta

```
public class BalancoTrimestral {// Declaração da classe Main
    // Início da classe Main 
    // Declaracao do método main que inicia a execução do programa  
	public static void main(String[] args){

        //delcaracao das variaveis gastos 
	    double gastosjaneiro = 30000.00;
        double gastosfevereiro = 33030.77;
        double gastosmarco = 23899.01;
	    
	     
	    //declaraçao da variavel soma e inicialização com a soma
	    double gastosTrimestre = gastosjaneiro + gastosfevereiro + gastosmarco;
        
        //Exibe a variavel gastosTrimestre
        System.out.println("O total gasto neste Trimestre foi de: " + gastosTrimestre);

        //declaraçao da variavel medialMensal com a media dos 3 meses
        double mediaMensal = (gastosjaneiro + gastosfevereiro + gastosmarco) / 3;

        //Exibe a variavel medialMensal
        System.out.println("Valor da média mensal = " + mediaMensal);
        
    }
}
//fim da classe Main

```
