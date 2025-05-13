
public class ExercicioSemRetorno{// Declaração da classe ExercicioSemRetorno
     // Início da classe Main 
    // Declaracao do método main que inicia a execução do programa 
    
    public static void main(String[] args) {
        //declaração, alocação e inicializacao do vetor "vetor" 
        int[] vetor = {123, 32, 1, 5, 7, 4, 86, 1, 3, 10};

        //chamando o metodo imprimirNumeros para printar o array 
        imprimirNumeros(vetor);

        //declaração, alocação e inicializacao do vetor "vetor2" 
        int[] vetor2 = {32, 23, 12, 54, 2, 3, 1, 2, 3, 0};

        //chamando o metodo somaNumeros para somar os dois vetores 
        somaNumeros(vetor, vetor2);
        
    } // fim do metodo main
    
    // Declaração do método imprimirNumeros que recebe um array de inteiros e imprime os números
    public static void imprimirNumeros(int[] array) {
        System.out.println("Saida do Vetor: ");
        //estrutura de repetição for que percorre o o vetor de parametro e faz um print de cada posição
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i] + "\t");
        }
        //print para quebra de linha
        System.out.println();
    } // fim do imprimirNumeros

    //declaracao do método imprimirNumeros que faz a soma de dois array como parametro 
    public static void somaNumeros (int[] array, int[] array2) {
        //declaração e alocação do vetor "arraysoma" com o tamanho do vetor "vetor"
        int[] arraySoma = new int[array.length];

        //estrutura de repetição que realiza a soma dos array e atribui o valor para outro arrray
        for (int i = 0; i < array.length; i++) {
            arraySoma[i] = array[i] + array2[i];
        }

        //prints de orientação
        System.out.println();
        System.out.println("Saida do vetor somado");
        //chamando o metodo imprimirNumeros para printar a soma dos array
        imprimirNumeros(arraySoma);
    } // fim do metodo somaNumeros

}// fim da classe ExercicioSemRetorno