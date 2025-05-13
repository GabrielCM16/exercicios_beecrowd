
public class Mamiferos{
    private String nome; //atributo String nome
    private int idade; //atributo int idade

    //metodo construtor da classe
    public Mamiferos(String nomee, int idadee){
        this.nome = nomee;
        this.idade = idadee;
    }

    public void setNome(String nomee){
        this.nome = nomee;
    }

    public void setIdade(int idadee){
        this.idade = idadee;
    }

    //metodo getNome para retorno da String nome
    public String getNome(){
        return this.nome;
    }

    //metodo getIdade para retorno da String idade
    public int getIdade(){
        return this.idade;
    }

    public void emitirSom(){
        System.out.println("Som de mamífero");
    }

    public void mover(){
        System.out.println("Mamífero se movendo");
    }

    
}