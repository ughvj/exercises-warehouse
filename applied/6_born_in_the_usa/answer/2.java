// 5個の数を入力し、それらを昇順に並べて出力しよう
// 1から100までのうち5個の数が、重複なく入力されます

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int[] sorted = new int[100];
        
        for (int i=0; i<5; i++) {
            int input = scan.nextInt();
            sorted[input-1] = 1;
        }
        
        for (int i=0; i<100; i++) {
            if (sorted[i] == 1) {
                System.out.printf("%d\n", i+1);
            }
        }
    }
}
