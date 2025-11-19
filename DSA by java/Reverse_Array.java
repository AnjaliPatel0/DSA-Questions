import java.util.Scanner;
public class Reverse_Array{

    static void Reverse(int[] arr){
        int temp;
        for(int i=0;i<arr.length/2;i++){
            temp =arr[i];
            arr[i]=arr[arr.length-(i+1)];
            arr[arr.length-(i+1)]=temp;
              }
          }
public static void main(String[] args) {
     Scanner sc =new Scanner(System.in);
        System.out.println("Enter size of array");
        int n =sc.nextInt();
        int[] arr =new int[n];

        System.out.println("Enter array " + n + " Elements");
        for(int i=0;i<arr.length;i++){
            arr[i]=sc.nextInt();
        }
        System.out.println("Reverse of array is");
        Reverse(arr);
        for(int i=0;i<arr.length;i++){
       System.out.print(arr[i]);
       System.out.println();
        }        
    }
}