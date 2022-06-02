// 九九を9の段まで全て出力しよう(式も出力しよう)

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        for (int i=1; i<=9; i++) {
            for (int j=1; j<=9; j++) {
                System.out.printf("%d*%d=%d\n", i, j, i*j);
            }
        }
    }
}
