class Solution {
    public int[][] transpose(int[][] matrix) {
        //  int M = A.length, N = A[0].length;
        // int[][] B = new int[N][M];
        // for (int j = 0; j < N; j++)
        //     for (int i = 0; i < M; i++)
        //         B[j][i] = A[i][j];
        // return B;
        
        int m= matrix.length;
        int n=matrix[0].length;
        
        int[][] B=new int[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                B[i][j]=matrix[j][i];
            
            }
        return B;
    }
}