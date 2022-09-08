// 2個の整数を入力し、それらの和を出力しよう
// ただし、和が100を超える場合には代わりに "NG" と出力してください

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        
        int a = scan.nextInt();
        int b = scan.nextInt();
        
        if (a+b >= 100) {
            System.out.printf("NG\n");
        } else {
            System.out.printf("%d\n", a+b);   
        }
        
        scan.close();
    }
}
