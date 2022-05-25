import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        
        int divider = scan.nextInt();
        int quotient = scan.nextInt();
        int remainder = scan.nextInt();
        
        // dividee / divider = quotient
        // dividee           = quotient * divider
        // dividee           = quotient * divider + remainder
        System.out.printf("%d\n", divider * quotient + remainder);

        scan.close();
    }
}
