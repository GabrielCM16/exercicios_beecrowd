# Atv04

Atualmente os gastos mensais de uma empresa são detalhados em planilhas eletrônicas. Assim, para fechar o balanço do
primeiro trimestre, é necessário somar o gasto total destas planilhas. Sabendo que, em janeiro, foram gastos R$ 30.000,00 reais, em fevereiro, R$ 33.030,77 reais e em março, R$ 23.899,01 reais, faça uma classe em Java que calcule e exiba o gasto total no trimestre, seguindo os seguintes passos:

* a) Crie uma classe chamada BalancoTrimestral com o método main;
* b) No método principal, declare uma variável do tipo real chamada gastosJaneiro e inicialize-a com o valor gasto no mês de janeiro;
* c) Crie também as variáveis gastosFevereiro e gastosMarco, inicializando-as com os respectivos gastos, utilize uma linha para cada declaração;
* d) Crie uma variável chamada gastosTrimestre e inicialize-a com a soma das outras variáveis;
* e) Exiba a variável gastosTrimestre.

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
        
    }
}
//fim da classe Main

``` 
