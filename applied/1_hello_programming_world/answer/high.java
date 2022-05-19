import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Random rand = new Random();
        switch(rand.nextInt(3)) {
            case 0:
                System.out.printf("Hello\n");
                break;
            case 1:
                System.out.printf("World\n");
                break;
            case 2:
                System.out.printf("Again\n");
                break;
        }
    }
}
