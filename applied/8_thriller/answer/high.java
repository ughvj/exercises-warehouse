// 2つの0~99までのランダムな整数の和を計算しよう
// 上記の手順を10,000回繰り返して、100を超えた和の割合を百分率で小数第一位まで出力してください

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Random rand = new Random();
        int count = 0;
        
        for (int i=0; i<10000; i++) {
            int a = rand.nextInt();
            int b = rand.nextInt();
            if (a+b >= 100) count++;
        }
        
        System.out.printf("%.1f\n", (float)count/10000*100);
    }
}
