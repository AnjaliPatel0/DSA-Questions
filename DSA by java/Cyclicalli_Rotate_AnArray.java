public class Cyclicalli_Rotate_AnArray {
    public static void main(String[] args) {
        int[] arr ={1,2,3,4,5};
        //{5,1,2,3,4}
        int lastValue =arr[(arr.length)-1];
        for(int i=arr.length-1;i>0;i--){
            arr[i] =arr[i-1];
        }

        arr[0]=lastValue;
        for(int k:arr){
            System.out.println(k);
        }
    }
}
