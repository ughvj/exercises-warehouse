import java.util.*;

public class _2 {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int input = scan.nextInt();
        scan.close();

        int sum = 0;

        for (int i=0; i<=input; i++) {
            sum += i;
        }

        System.out.printf("%d\n", sum);
    }
}
