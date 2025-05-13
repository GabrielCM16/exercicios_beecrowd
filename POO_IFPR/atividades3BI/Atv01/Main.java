// Programa Principal
public class Main {
    public static void main(String[] args) {
        // Teste dos métodos implementados
        Cachorros cachorro1 = new Cachorros("Rex", "Labrador", 3);
        cachorro1.emitirSom();
        cachorro1.mover();
        System.out.println(cachorro1.getNome());
        System.out.println(cachorro1.getIdade());
        cachorro1.abanarRabo();

        System.out.println(); // mensagem vazia para auxilar a visualização

        Passaros passaro1 = new Passaros("Piu-piu", 2, "Amarelo");
        passaro1.emitirSom();
        System.out.println(passaro1.getIdade());
        System.out.println(passaro1.getNome());
        passaro1.voar();
        System.out.println(passaro1.getCor());
        passaro1.construirNinho();
    }
}