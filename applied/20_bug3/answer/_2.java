import java.util.*;

public class _2 {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int a, b;
        try {
            a = scan.nextInt();
            b = scan.nextInt();
        } catch (Exception e) {
            System.out.printf("NG\n");
            scan.close();
            return ;
        }
        scan.close();

        if (a < b) {
            System.out.printf("NG\n");
        } else {
            System.out.printf("%d\n", a/b);
            System.out.printf("%d\n", a%b);
        }
    }
}
