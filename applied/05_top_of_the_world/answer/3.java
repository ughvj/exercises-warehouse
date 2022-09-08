// 1から100まで順番に数字を数えていき、
// その数字が3の倍数であれば "Hello",
// その数字が5の倍数であれば "World",
// 15の倍数であれば "HelloWorld",
// それ以外であればその数字をそのまま出力するプログラムを作成しよう

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        int i;

        for (i = 1; i <= 100; i++) {
            if (i % 15 == 0) {
                System.out.printf("HelloWorld\n");
            } else if (i % 3 == 0) {
                System.out.printf("Hello\n");
            } else if (i % 5 == 0) {
                System.out.printf("World\n");
            } else {
                System.out.printf("%d\n", i);
            }
        }
    }
}
