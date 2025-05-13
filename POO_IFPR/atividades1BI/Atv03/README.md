# Atv03

Usando a classe JOptionPane para entrada de dados, crie uma classe que receba a nota de duas provas e de um trabalho. Calcule e mostre a média.

IFPR - Campus Cascavel

Aluno: Gabriel Costa de Moraes

Turma: 3° INF 2023

Disciplina: Programação orientada a Objetos Professor: Nelson Bellincanta

```
//importando o JOptionPane
import javax.swing.JOptionPane;

public class CalculaMeida {// Declaração da classe Main
    // Início da classe Main 
    // Declaracao do método main que inicia a execução do programa  
	public static void main(String[] args){

        String aux;
        float prova1, prova2, trabalho;

        //entrada dos dados com a classe JOptionPane
        aux = JOptionPane.showInputDialog("Entre com a nota da primeira prova");
        prova1 = Float.parseFloat(aux); //conversao dos dados para float

        aux = JOptionPane.showInputDialog("Entre com a nota da segunda prova");
        prova2 = Float.parseFloat(aux);

        aux = JOptionPane.showInputDialog("Entre com a nota do trabalho");
        trabalho = Float.parseFloat(aux);

        //declaraçao da variavel media e inicialização dela
        float media = (prova1 + prova2 + trabalho) / 3;
        
        //mostrando na tela o resultado media
        JOptionPane.showMessageDialog(null, "Media = " + media);

        
    }
}
//fim da classe Main

```
