// フィボナッチ数列のn番目を求めるプログラムを作成しよう

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int input = scan.nextInt();
        System.out.printf("%d\n", fib(input));
    }
    
    public static int fib(int n) {
        return n == 0 || n == 1 ? n : fib(n - 2) + fib(n - 1);
    }
}
