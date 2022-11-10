// 変数に "Hello world" を格納し、出力してください

import java.util.*;

public class high {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        String input = scan.nextLine();
        scan.close();

        for (int i = 0; i < input.length(); i++) {
            System.out.printf("%c", input.charAt(i));
            if ((i+1) % 10 == 0) {
                System.out.printf("\n");
            }
        }
    }
}
