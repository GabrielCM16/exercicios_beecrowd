// Classe Aves
public class Aves {
    String nome;
    int idade;

    // Construtor
    public Aves(String nome, int idade) {
        this.nome = nome;
        this.idade = idade;
    }

    // Método emitirSom()
    public void emitirSom() {
        System.out.println("Som de ave");
    }

    public String getNome(){
        return nome;
    }

    public int getIdade(){
            return idade;
        }

    // Método voar()
    public void voar() {
        System.out.println("Ave voando");
    }
}
