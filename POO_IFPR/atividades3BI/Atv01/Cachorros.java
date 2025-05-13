public class Cachorros extends Mamiferos{
    private String raca; //atributo raca

    public Cachorros(String racaa, String nome, int idade){
        super(nome, idade);
        this.raca = racaa;
    }

    public String getRaca(){
        return this.raca;
    }



    public void setRaca(String racaa){
        this.raca = racaa;
    }



    public void abanarRabo(){
        System.out.println("O cachorro está abanando o rabo.");
    }
}