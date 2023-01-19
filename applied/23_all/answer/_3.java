import java.util.*;

public class _3 {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        String password = scan.nextLine();
        scan.close();

        if (password.equals("yabai_hebi")) {
            System.out.printf("突破!\n");
        } else {
            System.out.printf("シャー\n");
        }
    }
}
