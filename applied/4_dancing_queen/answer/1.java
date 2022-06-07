// 1つの数字を入力して、その回数だけ"Hello world!"と出力しよう

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int input = scan.nextInt();
        
        for (int i=0; i<input; i++) {
            System.out.printf("Hello world!\n");
        }
    }
}
