// 2つの数字を入力して、それらの商を出力しよう
// 1つ目の入力が割られる数、2つ目の入力が割る数とします
// ただし、割る数に0が入力された場合、"ゼロ除算です" と出力します

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int dividee = scan.nextInt();
        int divider = scan.nextInt();
        
        if (divider == 0) {
            System.out.printf("ゼロ除算です\n");
        } else {
            System.out.printf("%d\n", dividee/divider);
        }
    }
}
