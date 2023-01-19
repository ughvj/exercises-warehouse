import java.util.*;

public class _2 {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int m = scan.nextInt();
        scan.close();

        for (int i=1; i<=n; i++) {
            if (i % m == 0) {
                System.out.printf("%d\n", i);
            }
        }
    }
}
