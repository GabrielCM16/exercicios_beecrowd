import java.io.IOException;
import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in);
		
		int b = leitor.nextInt();
		int t = leitor.nextInt();
		
		int h = 70;
		int aTotal = h * 160;
		
		int ma = aTotal - (((b + t) * h) /2);
        int fe = aTotal - ma;
        
        if (fe > ma){
            System.out.println(1);
        } else if (ma > fe){
            System.out.println(2);
        } else{
            System.out.println(0);
        }
	}
}
