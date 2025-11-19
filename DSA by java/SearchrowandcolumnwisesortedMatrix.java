public class SearchrowandcolumnwisesortedMatrix {
      public static void main(String[] args) {
        int[][] mat = {
            {3,  30, 38, 50},
            {20, 52, 54, 60},
            {35, 60, 69, 80},
            {70, 85, 90, 95}
        };
        
        int key = 30;
         int row = 0;
        int col = mat[0].length - 1;  
        boolean found = false;
        while (row < mat.length && col >= 0) {
           
            if (mat[row][col] == key) {
                System.out.println("key " + key + " found at(" + row + "," + col + ")");
                found= true;
                break;
            } else if (mat[row][col]> key) {
                col--;     
            } else {
                row++;    
            }
        }
        if(!found)
        System.out.println("key " + key + " not found");    
    }
}
