public class SomaDois {

    public static int soma(int a, int b){
        return a + b;
    }
    public static int lerInt(String mensagem){
        System.out.println(mensagem);
        return leitor.nextInt();
    }

    public static void fechar(){
        leitor.close();
    }
    
}
