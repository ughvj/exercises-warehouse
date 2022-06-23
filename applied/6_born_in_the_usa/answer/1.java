// 大きさが5の配列を用意し、0から4までの数字を配列に格納してください
// その配列の順番を逆転して出力しよう

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        int array[] = {0, 1, 2, 3, 4};
        for (int i=4; i>=0; i--) {
            System.out.printf("%d\n", array[i]);
        }
    }
}
