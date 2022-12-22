import java.util.*;

public class _4 {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        scan.close();

        int sum = 0;
        if (a < b) {
            for (int i=a; i<=b; i++) {
                sum += i;
            }
        } else {
            for (int i=b; i<=a; i++) {
                sum += i;
            }
        }

        System.out.printf("%d\n", sum);
    }
}
