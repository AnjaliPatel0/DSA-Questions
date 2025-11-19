public class SnakePatternPrint {
    public static void printSnakePattern(int[][] matrix) {
        int rows = matrix.length;

        for (int i = 0; i < rows; i++) {
            if (i % 2 == 0) {
                // Print left to right
                for (int j = 0; j < matrix[i].length; j++) {
                    System.out.print(matrix[i][j] + " ");
                }
            } else {
                // Print right to left
                for (int j = matrix[i].length - 1; j >= 0; j--) {
                    System.out.print(matrix[i][j] + " ");
                }
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int[][] matrix = {
            {1, 2, 3},
            {5, 7, 6},
            {7, 8, 9}
        };

        System.out.println("Snake Pattern:");
        printSnakePattern(matrix);
    }
}
