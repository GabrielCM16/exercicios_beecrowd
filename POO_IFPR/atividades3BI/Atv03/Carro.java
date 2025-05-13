// Início da definição da classe Carro, que estende a classe Veiculo
public class Carro extends Veiculo {
    private int numeroDePortas;
    
    // Construtor da classe Carro, que chama o construtor da classe base Veiculo
    public Carro(String marca, String modelo, int ano, int numeroDePortas) {
        super(marca, modelo, ano); // Chamada ao construtor da classe base
        this.numeroDePortas = numeroDePortas;
    }
    
    // Método getter para obter o número de portas do carro
    public int getNumeroDePortas() {
        return numeroDePortas;
    }
    
    // Método setter para definir o número de portas do carro
    public void setNumeroDePortas(int numeroDePortas) {
        this.numeroDePortas = numeroDePortas;
    }

    // Sobrescrita do método exibirDetalhes da classe base Veiculo
    @Override
    public void exibirDetalhes() {
        super.exibirDetalhes(); // Chamada ao método da classe base
        System.out.println("Número de Portas: " + numeroDePortas);
    }
    
} // Fim da definição da classe Carro
