// 1つの数字を入力し、その数字が0以下になるまで5を引いていき、最後に5を引いた回数を出力するプログラムを作成しよう

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int count = 0;
        int input;
        
        for (input = scan.nextInt(); input > 0; input -= 5, count++) ;
        
        System.out.printf("%d\n", count);
    }
}
