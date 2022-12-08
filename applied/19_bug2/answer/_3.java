import java.util.*;

public class _3 {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int input = 0;

        while(input < 1) {
            try {
                input = scan.nextInt();
            } catch (Exception e) {
                input = 0;
                scan.next();
            }
            if (input < 1) {
                System.out.printf("1以上の整数を入力してください\n");
            }
        }
        scan.close();

        int sum = 1;
        for (int i=2; i<=input; i++) {
            sum *= i;
        }
        System.out.printf("%d\n", sum);
    }
}
