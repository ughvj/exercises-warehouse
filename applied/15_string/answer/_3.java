// 変数に "Hello world" を格納し、出力してください

import java.util.*;

public class _3 {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        String input;

        for (input = scan.nextLine(); input.length() >= 10; input = scan.nextLine()) ;
        
        System.out.printf("%s\n", input);
        scan.close();
    }
}
