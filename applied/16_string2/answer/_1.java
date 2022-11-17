// 入力した文字列が、"Hello" を含んでいた場合に、"World" を出力してください
// 含んでいない場合は、"Please say "Hello" !" と出力してください

import java.util.*;

public class _1 {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        String input = scan.nextLine();
        scan.close();

        if (input.indexOf("Hello") == -1) {
            System.out.printf("Please say \"Hello\" \n");
        } else {
            System.out.printf("World\n");
        }
    }
}
