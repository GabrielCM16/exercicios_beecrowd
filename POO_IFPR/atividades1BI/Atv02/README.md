# Atv02

Atividade:

* Crie uma classe em Java que realize cada uma das seguintes tarefas:

* * a) Exibir a mensagem “Informe um inteiro: “, deixando o cursor na mesma linha;
* * b) Atribuir o produto de variáveis b e c para a variável a;
* * c) Utilizar um comentário para afirmar que um programa executa um cálculo de exemplo de folha de pagamento.

IFPR - Campus Cascavel 

Aluno: Gabriel Costa de Moraes

Disciplina: Programação orientada a Objetos Professor: Nelson Bellincanta

```
//importação da classe Scanner do pacote java.util
import java.util.Scanner; 
// importação da classe IOException para tratar exceções
import java.io.IOException;


public class Main {// Declaração da classe Main
    // Início da classe Main 
    // Declaracao do método main que inicia a execução do programa  
	public static void main(String[] args) throws IOException {
		// Cláusula throws permite que um erro seja descartado, mesmo que ele ocorra
		
        Scanner leitor = new Scanner(System.in); //prepara a entrada de dados
        
        System.out.println("Digite um numero inteiro"); //Mensagem de orientação
        int b = leitor.nextInt(); //declaraçao e inicialização da variavel
        
        leitor.close(); // fecha o objeto leitor
        
        double c = 5.5; //variavel c
        
        //declaraçao da variavel a (salario) e inicialização com o produto de b e c
        double a = b * c; // executa um cálculo de exemplo de folha de pagamento.
        
        // Exibe o valor do produto
        System.out.println("O produto do argumento b (" + b + ") e c (5.5) é: a ( " + a + " )" );
	}// fim do método main
}//fim da classe Main
```
