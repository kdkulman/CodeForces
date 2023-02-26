import java.util.Scanner;

public class Main {

    public static void main (String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        String[] array = new String[n];

        for (int i = 0; i < n; i++) {
            array[i] = scan.next();
        }

        for (int i = 0; i < n; i++) {
            String s = array[i];

            if (s.length() <= 10) {
                System.out.println(s);
                continue;
            }

            //abbreviate
            StringBuilder sb = new StringBuilder();
            sb.append(s.charAt(0));
            sb.append(s.length()-2);
            sb.append(s.charAt(s.length()-1));
            System.out.println(sb.toString());

        }
    }


}
