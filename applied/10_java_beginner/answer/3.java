import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        
        int a = scan.nextInt();
        int b = scan.nextInt();
        
        if (a == 0 && b == 0) {
            System.out.printf("NG");
        } else {
            System.out.printf("%d\n", a*b);
        }
        
        scan.close();
    }
}
