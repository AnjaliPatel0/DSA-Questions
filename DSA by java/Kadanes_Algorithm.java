public class Kadanes_Algorithm {
     static int maxSubarraySum(int [] arr){
        int maxAti = 0;
        int maxContinuous = arr[0];
        for(int i =  0; i< arr.length; i++){

            maxAti = Math.max(arr[i], maxAti + arr[i]);
            maxContinuous = Math.max(maxAti, maxContinuous);
        }
        return maxContinuous;
    }
    public static void main(String[] args) {

        int[] arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
        System.out.println("Maximum of Subarray is ");
        System.out.println(maxSubarraySum(arr));
  }
}
