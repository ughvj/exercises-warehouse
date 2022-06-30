// 9個の昇順に並んだ整数を入力し、それらの合計と平均と中央値を出力しよう
// 平均は小数第一位まで表示してください

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int input, sum=0;
        int[] values = new int[9];
        
        for (int i=0; i<9; i++) {
            input = scan.nextInt();
            values[i] = input;
            sum += input;
        }
        
        // sum
        System.out.printf("合計=%d\n", sum);
        
        // average
        System.out.printf("平均=%.1f\n", (float)sum/9);
        
        // median
        System.out.printf("中央値=%d\n", values[4]);
    }
}
