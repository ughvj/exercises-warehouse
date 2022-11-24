// 問題1に加えて、入力した文字列が空白のみである場合にも「empty」と出力してください
// 空でない場合は、そのまま出力してください

import java.util.*;

public class _2 {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        String input = scan.nextLine();
        scan.close();

        if (input.trim().length() == 0) {
            System.out.printf("empty\n");
        } else {
            System.out.printf("%s\n", input);
        }
    }
}
