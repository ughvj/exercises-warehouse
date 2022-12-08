import java.util.*;

public class _1 {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int input = scan.nextInt();
        scan.close();

        if (input < 1) {
            System.out.printf("1以上の整数を入力してください\n");
        } else {
            int sum = 1;
            for (int i=2; i<=input; i++) {
                sum *= i;
            }
            System.out.printf("%d\n", sum);
        }
    }
}
