public class RotateMatrix_90DegreeClockwise {
    public static void main(String[] args) {
        int[][] arr ={
            {1,2,3,4},
            {23,34,12,45},
            {3,7,8,9} };
         int n = arr.length;
        // Step 1: Transpose the matrix
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }

        // Step 2: Reverse each row
        for (int i = 0; i < n; i++) {
            int start = 0, end = n - 1;
            while (start < end) {
                int temp = arr[i][start];
                arr[i][start] = arr[i][end];
                arr[i][end] = temp;
                start++;
                end--;
            }
    }
         //Print the rotated matrix
         for (int i=0;i<arr.length;i++) {
            for (int j=0;j<arr[0].length;j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
  }

