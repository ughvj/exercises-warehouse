// 入力された文字列について、無限にしりとりが成立するか判定しよう

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        String input;
        int[] start = new int[26];
        int[] end = new int[26];
        
        for (input = scan.next(); !input.equals("0"); input = scan.next()) {
            start[input.charAt(0) - 'a']++;
            end[input.charAt(4) - 'a']++;
        }
        
        int i;
        for (i=0; i<26; i++) {
            if (start[i] != end[i]) break;
        }
    
        if (i == 26) {
            System.out.printf("yes\n");
        } else {
            System.out.printf("no\n");
        }
    }
}
