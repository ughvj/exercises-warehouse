// n個の整数を入力し、それらの平均を出力しよう
// -1が入力されたら入力を終了します
// 平均は小数第一位まで表示してください

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int count = 0;
        float sum = 0;
        
        for (int input = scan.nextInt(); input != -1; count++, input = scan.nextInt()) {
            sum += input;
        }
        
        System.out.printf("%.1f\n", sum/count);
    }
}
