import java.util.Arrays;
public class FindMedian_inRowWise_SortedMatrix {
    public static void main(String[] args) {
             int[][] matrix = {
            {1, 3, 5},
            {2, 6, 9},
            {3, 6, 9}
        };
        System.out.println("Median: " + findMedian(matrix));
    }
    public static double findMedian(int[][] matrix) {
        int rows = matrix.length;
        int cols = matrix[0].length;
        int[] arr = new int[rows * cols];
        int index = 0;

        // Flatten the matrix into an array
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                arr[index++] = matrix[i][j];
            }
        }

        // Sort the array
        Arrays.sort(arr);
        int n = arr.length;
        if (n % 2 == 0) {
            // If length is even, median is the average of two middle elements
            return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
        } else {
            // If length is odd, median is the middle element
            
            return arr[n / 2];
      }
   }    
}
