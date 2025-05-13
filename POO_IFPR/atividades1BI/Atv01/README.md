# Atv 01

Atividade:
* Crie uma classe em Java que seja capaz de apresentar a soma de todos os argumentos inteiros ou reais recebidos. Argumentos inválidos devem ser desconsiderados sem provocar a exibição de erros ou exceções.

IFPR - Campus Cascavel
Aluno: Gabriel Costa de Moraes Disciplina: Programação orientada a Objetos
Professor: Nelson Bellincanta

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
        int num_1 = leitor.nextInt(); //declaraçao e inicialização da variavel
        System.out.println("Digite outro numero inteiro"); //Mensagem de orientação
        int num_2 = leitor.nextInt(); //declaraçao e inicialização da variavel
        
        leitor.close(); // fecha o objeto leitor
        
        //declaraçao da variavel soma e inicialização com a soma
        int soma = num_1 + num_2; 
        
        // Exibe o valor da soma
        System.out.println("A soma dos argumentos é : " + soma);
	}// fim do método main
}//fim da classe Main
```
