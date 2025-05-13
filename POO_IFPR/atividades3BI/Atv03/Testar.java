public class Testar {
    public static void main(String[] args) {
        // Criação de um objeto da classe Carro, passando os valores para o construtor
        Carro obj1 = new Carro("Toyota", "Corolla", 2022, 4);
        
        // Chama o método exibirDetalhes do objeto Carro para mostrar informações
        obj1.exibirDetalhes();
        System.out.println();

        // Criação de um objeto da classe Moto, passando os valores para o construtor
        Moto obj2 = new Moto("Honda", "CBR500R", 2021, 500);
        
        // Chama o método exibirDetalhes do objeto Moto para mostrar informações
        obj2.exibirDetalhes();
    }
}
