// 変数に "Hello world" を格納し、出力してください

import java.util.*;

public class _3 {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        String input = scan.nextLine();
        scan.close();

        System.out.printf("%s\n", input.replace("Hello", ""));
    }
}
