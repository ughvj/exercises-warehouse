// 数字を入力し、その数字を素因数分解して出力しよう
// ただし、入力される数字の最小値は2、最大値は100とします 範囲外の数字が入力された場合は "範囲外です" と出力します

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int input = scan.nextInt();
        int i = 2;
        
        if (2 <= input && input <= 100) {
            while (i < input) {
                if (input % i == 0) {
                    System.out.printf("%d*", i);
                    input /= i;
                    i = 2;
                } else {
                    i++;
                }
            }
            System.out.printf("%d", input);
        } else {
            System.out.printf("範囲外です\n");
        }
    }
}
