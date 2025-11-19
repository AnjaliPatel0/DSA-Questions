public class IntersectionoftwoArray {
   public  static void findIntersection(int[] arr1 ,int[] arr2){
           int i= 0, j =0;
       while(i<arr1.length && j<arr2.length){
            if(arr1[i]<arr2[j]){
             i++;
            }else if(arr2[j]<arr1[i]){
                j++;
            }else{
                System.out.print(arr1[i] + " ");
                 i++;
                 j++;
            }    
        }
    }
    public static void main(String[] args) {
        int[] arr1 ={ 2 ,3 ,4 ,5 ,7,8};
        int[] arr2 ={1,2,3,7,33,45};

        System.out.println("Intercetion of the two sorted array");
        findIntersection(arr1, arr2);
    }
}
