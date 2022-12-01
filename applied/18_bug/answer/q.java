// 入力した文字列が空である場合には、 「empty」と出力してください
// 空でない場合は、そのまま出力してください

import java.util.*;

public class q {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int input = scan.nextInt();
        scan.close();

        // 1未満の数字が入力された場合
        if (input < 1) {
            System.out.printf("1, 2, 3のどれかの数字を入力してください\n");
        }

        if (input == 1) {
            System.out.printf("Hello\n");
        } else if (input == 2) {
            System.out.printf("World\n");
        } else if (input == 3) {
            System.out.printf("Again\n");
        }

        // 3より大きい数字が入力された場合
        if (input > 3) {
            System.out.printf("1, 2, 3のどれかの数字を入力してください\n");
        }

        // 文字が入力された場合
        // 次回やります！思いついた人はすごい！
    }
}
