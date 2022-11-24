// 複数行の文字列の入力を受け付けてください
// 何も入力しない行があれば、そこで入力を終了します
// 入力された文字列と、その行数を出力してください

import java.util.*;

public class _3 {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        String input = "", output = "";
        int row = 0;

        for(
            input = scan.nextLine();
            input.trim().length() != 0;
            input = scan.nextLine()
        ) {
            output += input + "\n";
            row++;
        }

        System.out.printf("%s%d\n", output, row);

        scan.close();
    }
}
