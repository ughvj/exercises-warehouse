import java.util.*;

public class _1 {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        scan.close();

        if (a < b) {
            System.out.printf("NG\n");
        } else {
            System.out.printf("%d\n", a/b);
            System.out.printf("%d\n", a%b);
        }
    }
}
