import java.util.Scanner;

public class Practice {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        System.out.print("Enter your name: ");
        String s1=scan.nextLine();
        System.out.print("Enter another name: ");
        String s2=scan.nextLine();
        System.out.println("Your name is: " + s1 + " and his/her name is: "+s2);

        scan.close();

    }
}
