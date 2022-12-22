import java.util.*;

public class _7 {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int a = 0, b = 0;
        try {
            a = scan.nextInt();
            b = scan.nextInt();
        } catch (Exception e) {
            System.out.printf("整数を入力してください\n");
            scan.close();
            return;
        }
        scan.close();

        if (b == 0) {
            System.out.printf("ゼロ除算\n");
            return;
        }

        System.out.printf("%d\n", a+b);
        System.out.printf("%d\n", a-b);
        System.out.printf("%d\n", a*b);
        System.out.printf("%d\n", a/b);
    }
}
