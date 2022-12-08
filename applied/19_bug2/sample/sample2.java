import java.util.*;

public class sample2 {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int input;
        try {
            input = scan.nextInt();
        } catch (Exception e) {
            input = 0;
        }
        scan.close();

        System.out.printf("%d\n", input);
    }
}
