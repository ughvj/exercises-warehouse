// じゃんけんに勝利したら+100ポイント、敗北したら-50ポイントとして、nポイントを超えるまでじゃんけんを行うプログラムを作成しよう
// nポイントを超えた時点で、おこなったじゃんけんの回数を出力します

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        Random rand = new Random();
        int target = scan.nextInt();
        int current = 0;
        int count = 0;
        
        while (current <= target) {
            // 0 as winning
            if (rand.nextInt(2) == 0) {
                current += 100;
            } else {
                current -= 50;
            }
            count++;
        }
        
        System.out.printf("%d\n", count);
    }
}
