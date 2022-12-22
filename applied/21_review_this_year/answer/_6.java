import java.util.*;

public class _6 {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        String input = scan.nextLine();
        scan.close();

        String replaced = input.replaceAll(" ", "\n");
        System.out.printf("%s\n", replaced);
    }
}
