import java.util.Scanner;
public class Find_missing_Number_INArray {
     public static void main(String[] args ){
         Scanner sc =new Scanner(System.in);
         System.out.println("Enter size of array");
         int size =sc.nextInt();
         int[] arr=new int[size];

         System.out.println("Enter elements of array");
         for(int i=0;i<size;i++){
            arr[i]=sc.nextInt();
         }
         
         int sum=0;
         int tsum=((size+1)*(size+2))/2;
         for(int i=0;i<size;i++){
            sum+=arr[i];
         }

         int missing =tsum-sum;
         System.out.println("Missing number is " +missing);


    }
    
}


