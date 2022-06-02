// 100までの素数を全て出力しよう

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        int j;
        for (int i=2; i<=100; i++) {
            for (j=2; j<i; j++) {
                if (i % j == 0) break;
            }
            if (i == j) System.out.printf("%d\n", i);
        }
    }
}
