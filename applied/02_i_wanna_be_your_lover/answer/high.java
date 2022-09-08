import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        
        int a = scan.nextInt();
        int b = scan.nextInt();
        int c = scan.nextInt();
        
        double x1 = (-b + Math.sqrt(b*b - 4*a*c)) / (2 * a);
        double x2 = (-b - Math.sqrt(b*b - 4*a*c)) / (2 * a);
        
        System.out.printf("%.1f\n", x1);
        System.out.printf("%.1f\n", x2);

        scan.close();
    }
}
