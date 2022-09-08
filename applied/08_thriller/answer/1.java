// 2個の整数を入力し、それらの和を出力しよう

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        
        int a = scan.nextInt();
        int b = scan.nextInt();
        
        System.out.printf("%d\n", a+b);
        
        scan.close();
    }
}
