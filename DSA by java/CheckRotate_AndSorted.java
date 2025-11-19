public class CheckRotate_AndSorted {
     static boolean isRotSorted(int[] arr) {
         int count = 0;
        for(int i = 1; i< arr.length; i ++){

            if(arr[i]< arr[i-1]){

                count = count + 1;
            }
        }
        if(count == 0 || count == 1)return true;

        else return false;
    }

    public static void main(String[] args) {

        int [] testcase1 = {1, 3, 5, 6, 7, 9, 10};
        int [] testcase2 = {7, 9, 10, 1, 3, 4, 6};
        int [] testcase3 = {1, 2, 34, 5, 1, 4, 56};

        System.out.println("Testcase1 -- ");
        System.out.println(isRotSorted(testcase1));
        System.out.println("Testcase 2 -- ");
        System.out.println(isRotSorted(testcase2));
        System.out.println("Testcase3 -- ");
        System.out.println(isRotSorted(testcase3));
  }
}
