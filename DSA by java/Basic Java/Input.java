import java.util.Scanner;

public class Input{
    public static void  main(String[] args){
       Scanner scan = new Scanner(System.in);
       System.out.println("Enter Your long Name");
       String longname= scan.nextLine();
       System.out.println(longname);
       System.out.println("Enter Your short Name");
       String shortname= scan.next();
       System.out.println(shortname);
       System.out.println("Enter Your Marks");
       int marks= scan.nextInt();
       System.out.println(marks );
    
    
    }
}