/*
Classe impressão de texto: "Veiculo.java"
IFPR - Campus Cascavel
Disciplina: Programação orientada a Objetos
Professor: Nelson Bellincanta
Aluno: Gabriel Costa de Moraes
*/

public class Veiculo {
    private String marca;
    private String modelo;
    private int ano;
    
    // Construtor da classe Veiculo
    public Veiculo(String marca, String modelo, int ano) {
        this.marca = marca;
        this.modelo = modelo;
        this.ano = ano;
    }
    
    // Método getter para obter a marca do veículo
    public String getMarca() {
        return marca;
    }
    
    // Método setter para definir a marca do veículo
    public void setMarca(String marca) {
        this.marca = marca;
    }
    
    // Método getter para obter o modelo do veículo
    public String getModelo() {
        return modelo;
    }
    
    // Método setter para definir o modelo do veículo
    public void setModelo(String modelo) {
        this.modelo = modelo;
    }
    
    // Método getter para obter o ano do veículo
    public int getAno() {
        return ano;
    }
    
    // Método setter para definir o ano do veículo
    public void setAno(int ano) {
        this.ano = ano;
    }

    // Método para exibir os detalhes do veículo (marca, modelo e ano)
    public void exibirDetalhes() {
        System.out.println("Marca: " + marca);
        System.out.println("Modelo: " + modelo);
        System.out.println("Ano: " + ano);
    }
}
