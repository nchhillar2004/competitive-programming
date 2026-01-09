class Solution {
    public long maxMatrixSum(int[][] matrix) {
        int n = matrix.length;
        long sum = 0L;
        int negativeCount = 0;
        int minAbs = 100001;

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                sum += Math.abs(matrix[i][j]);
                if (matrix[i][j] < 0) negativeCount++;
                minAbs = Math.min(minAbs, Math.abs(matrix[i][j]));
            }
        }

        if (negativeCount%2!=0) return sum - (2 * minAbs);

        return sum;
    }
}
