# Atv07

Elabore uma classe que receba 5 notas de alunos por meio de showInputDialog, armazene essas notas em um array de cinco elementos, apresente em tela as cinco notas em ordem decrescente (da maior para a menor) e a média aritmética das notas.


IFPR - Campus Cascavel

Aluno: Gabriel Costa de Moraes

Turma: 3° INF 2023

Disciplina: Programação orientada a Objetos Professor: Nelson Bellincanta

```
//importando o JOptionPane
import javax.swing.JOptionPane;

public class a // Declaração da classe atv
{
    // Início da classe Main 
    // Declaracao do método main que inicia a execução do programa  
	public static void main(String[] args) {

		String aux; // str axuliar para o JOptionPane
        double vetor[] = new double[5]; //declaração e alocação do vetor

        
        for (int i = 0; i < 5; i++){ //iniciando um for para repetir 5 vezes a entrada da nota

            //entrada dos dados com a classe JOptionPane
            aux = JOptionPane.showInputDialog("Entre com a nota da primeira prova");
            //conversao dos dados para float e armazenando o dado no vetor
            vetor[i] = Float.parseFloat(aux); 

        } //fim do for 

        // organizando o vetor do maior para o menor (decrescente)

        boolean repetir; //variavel boleana para se repetir o while
        do {
            repetir = false; //atribuindo false para a variavel repetir
             
            for (int i = 1; i < vetor.length; i++) {
                //se vetor[anterior] for maior que vetor[na posição i]
                if (vetor[i - 1] > vetor[i]) {
                    //se verdadeiro troca a ordem dos dois valores com ajuda da variavel temp
                    double temp = vetor[i - 1];
                    vetor[i - 1] = vetor[i];
                    vetor[i] = temp;
                    repetir = true; //repetir recebe true pois deve se comparar novamente 
                }
            }
        } while (repetir);

        double media_aritimetica; //alocando a variavel para ser a media das notas
        //alocando e inicializando a variavel soma_notas
        double soma_notas = 0; // antes de criar a media vamos somar todas as notas do vetor

        String notas_ordenadas = ""; // string para ir adicionando as notas ja ordenadas

        //for para somar todas as notas do vetor e colocar na variavel em String as notas ja ordenadas 
        for (int i = 0; i < vetor.length; i++){ 

            notas_ordenadas +=  vetor[i] + ", "; // adicionando a nota na variavel notas_ordenadas
            soma_notas += vetor[i]; // adicionando a nota da posinçao i do vetor

        } //fim do for

        media_aritimetica = soma_notas / vetor.length; //fazendo a divisao pelo numero de notas (tamanho do vetor)

        //mostrando na tela oque se pede
        JOptionPane.showMessageDialog(null, "Notas organizadas = " + notas_ordenadas + " \n " + " Media das notas = " + media_aritimetica);
        
	}
}// fim da classe atv


```
