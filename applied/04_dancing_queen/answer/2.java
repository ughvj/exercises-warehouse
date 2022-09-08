// 1から順番に数字を足していき、nを超えたら計算をやめて、その時点の数字を出力するプログラムを作成しよう

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int limit = scan.nextInt();
        int acc = 0;

        for (int i = 1; acc <= limit; acc += i++) ;

        System.out.printf("%d\n", acc);
    }
}
