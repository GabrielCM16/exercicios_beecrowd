// Classe Pássaros (subclasse de Aves)
class Passaros extends Aves {
    String cor;

    // Construtor
    public Passaros(String nome, int idade, String cor) {
        super(nome, idade);
        this.cor = cor;
    }

    public String getCor(){
        return cor;
    }

    // Método adicional construirNinho()
    public void construirNinho() {
        System.out.println("O pássaro está construindo um ninho.");
    }

}
