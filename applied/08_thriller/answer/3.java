// 2個の整数を入力し、それらの和を出力しよう
// ただし、和が100を超える場合には代わりに "NG" と出力して、再度入力を求めてください

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        
        int a = scan.nextInt();
        int b = scan.nextInt();
        
        for (; a+b >= 100; a = scan.nextInt(), b = scan.nextInt()) {
            System.out.printf("NG\n");
        }

        // while文を使ったパターン
        // while (a+b >= 100) {
        //     System.out.printf("NG\n");
        //     a = scan.nextInt();
        //     b = scan.nextInt();
        // }
        
        System.out.printf("%d\n", a+b);
        
        scan.close();
    }
}
