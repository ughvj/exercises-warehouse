// 1つの数字を入力して、その数字が40以下なら "不合格"、41以上なら"合格"と出力しよう

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int input = scan.nextInt();
        
        if (input <= 40) {
            System.out.printf("不合格\n");
        } else {
            System.out.printf("合格\n");
        }
    }
}
