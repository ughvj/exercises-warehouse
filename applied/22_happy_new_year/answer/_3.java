import java.util.*;

public class _3 {
    public static void main(String[] args) throws Exception {

        int just = 0;

        for (int i=1; i<=2023; i++) {
            if (2023 % i == 0) {
                System.out.printf("%d\n", i);
                just++;
            }
        }

        if (just == 0) {
            System.out.printf("素数\n");
        }
    }
}
