import java.util.*;

public class high {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        String acc = "";

        for (String input = scan.nextLine(); !input.equals(""); input = scan.nextLine()) {
            acc += input;
        }

        System.out.printf("%d\n", acc.length());

        scan.close();
    }
}
