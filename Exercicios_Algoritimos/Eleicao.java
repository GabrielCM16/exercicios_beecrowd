import java.util.Scanner;

public class Eleicao {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        System.out.println("eleitores C1");
        int c1 = leitor.nextInt();

        System.out.println("eleitores C2");

        int c2 = leitor.nextInt();

        System.out.println("eleitores C3");

        int c3 = leitor.nextInt();

        System.out.println("eleitores nulos");

        int nulos = leitor.nextInt();

        System.out.println("eleitores brancos");

        int brancos = leitor.nextInt();

        int total = brancos + nulos + c3 + c2 + c1;

        System.out.println("o total de eleitores foi " + total);

        leitor.close();

        float Pc1 =  (c1 * 100) / total;
        float Pc2 =  (c2 * 100) / total;
        float Pc3 =  (c3 * 100) / total;
        float Pnulos =  (nulos * 100) / total;
        float Pbrancos =  (brancos * 100) / total;

        System.out.println("porcentagem C1 " + Pc1);
        System.out.println("porcentagem C2" + Pc2);
        System.out.println("porcentagem C3" + Pc3);
        System.out.println("porcentagem nulos" + Pnulos);
        System.out.println("porcentagem brancos" + Pbrancos);
        


    }
}
