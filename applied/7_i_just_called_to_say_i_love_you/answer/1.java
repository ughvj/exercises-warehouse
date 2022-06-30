// 5個の整数を入力し、それらの平均を出力しよう
// 平均は小数第一位まで表示してください

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        float sum = 0;
        
        for (int i=0; i<5; i++) {
            int input = scan.nextInt();
            sum += input;
        }
        
        System.out.printf("%.1f\n", sum/5);
    }
}
