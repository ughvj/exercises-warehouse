// 9個の整数を入力し、それらの分散と標準偏差を出力しよう
// それぞれ小数第一位まで表示してください

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int input;
        float[] values = new float[9];
        float sum=0, avg=0, variance;
        
        for (int i=0; i<9; i++) {
            input = scan.nextInt();
            values[i] = input;
            sum += input;
        }
        avg = sum/9;
        
        sum = 0;
        for(int i=0; i<9; i++) {
            sum += (values[i] - avg) * (values[i] - avg);
        }
        variance = sum/9;
        
        // variance
        System.out.printf("分散=%.1f\n", variance);
        
        // standard deviation
        System.out.printf("標準偏差=%.1f\n", Math.sqrt(variance));
    }
}
