// 変数に "Hello world" を格納し、出力してください

import java.util.*;

public class high {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        String input = scan.nextLine();
        scan.close();

        if (input.length() >= 10) {
            input = input.substring(0, 9) + "...";
        }

        System.out.printf("%s\n", input);
    }
}
