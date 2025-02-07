import java.util.Arrays;

class Square {
    public static void main(String[] args){
        int[][] matrix = {{1}};
        rotate(matrix);
        for(int i = 0; i<matrix.length;i++){
            System.out.println("Result matrix " + i + ": " + Arrays.toString(matrix[i]));
        }
    }
    public static void rotate(int[][] matrix) {
        int n = matrix.length;
        if (n == 1) return;
        int[][] temp = new int[n][n];

        for (int i = 0; i < n; i++){
            temp[i] = matrix[i].clone();
        }

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                matrix[i][j] = temp[(n-1)-j][i];
            }
        }
    }
}
