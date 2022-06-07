// n個の数字を入力し、それらを合計して出力しよう
// 0が入力されたら入力を終了します

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int input, acc;

        for (acc = 0, input = scan.nextInt(); input != 0; acc += input, input = scan.nextInt()) ;
    
        System.out.printf("%d\n", acc);
    }
}
