// Início da definição da classe Moto, que estende a classe Veiculo
public class Moto extends Veiculo {
    private int cilindradas;
    
    // Construtor da classe Moto, que chama o construtor da classe base Veiculo
    public Moto(String marca, String modelo, int ano, int cilindradas) {
        super(marca, modelo, ano); // Chamada ao construtor da classe base
        this.cilindradas = cilindradas;
    }
    
    // Método getter para obter as cilindradas da moto
    public int getCilindradas() {
        return cilindradas;
    }
    
    // Método setter para definir as cilindradas da moto
    public void setCilindradas(int cilindradas) {
        this.cilindradas = cilindradas;
    }

    // Sobrescrita do método exibirDetalhes da classe base Veiculo
    @Override
    public void exibirDetalhes() {
        super.exibirDetalhes(); // Chamada ao método da classe base
        System.out.println("Cilindradas: " + cilindradas);
    }
    
} // Fim da definição da classe Moto
