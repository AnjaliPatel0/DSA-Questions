import java.util.Scanner;

public class MaxAndMin {
   
    public static void main(String[] args) {
       Scanner sc =new Scanner(System.in);
        System.out.println("Enter size of array");
        int n =sc.nextInt();
        int[] arr =new int[n];

        System.out.print("Enter array " + n + " Elements");
        for(int i=0;i<arr.length;i++){
            arr[i]=sc.nextInt();
        }
        int max=arr[0];
        int min = arr[0];
        for(int i=0;i<arr.length;i++){
            if(arr[i]>max){
                max=arr[i];
            }
          else {
            if(arr[i]<min)
                min=arr[i];
            }
        }
          System.out.println("Maximum element is " +max);
        System.out.println("Minimum element is " +min);
    }
}
