//**************************************************************************************  
       /* // better Solution

        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<int>row(n,0); // put zero
        vector<int>col(m,0); // put zero

        //  //Putting zero i row array manually
        // for(int i=0; i<n; i++){
        //     row[i] = 0;
        // }
        // for(int j=0; j<m; j++){
        //     col[j] = 0;
        // }
    // Traverse the matrix:
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    // mark ith index of row wih 1:
                    row[i] = true;
                    // mark jth index of col wih 1:
                    col[j] = true;
                }
            }
        }
        // Finally, mark all (i, j) as 0
        // if row[i] or col[j] is marked with 1.
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (row[i] || col[j]) {
                    matrix[i][j] = 0;
                }
            }
        }  
    }*/

    
     //**************************************************************************************
// only for brute force solution
    void markRow(vector<vector<int>>& matrix, int i, int m){
        for(int j=0; j<m; j++){
            if(matrix[i][j] != 0) matrix[i][j] = -1;
        }
    }
    void markCol(vector<vector<int>>& matrix, int j, int n){
        for(int i=0; i<n; i++){
            if(matrix[i][j] != 0) matrix[i][j] = -1;
        }
    }
/ / brute force
 void setZeroes(vector<vector<int>>& matrix) {
        // brute force solution
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    markRow(matrix, i, m); // marking as -1 entire coloumn
                    markCol(matrix, j, n); // marking as -1 entire row
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == -1){ // where i will get -1 change to zero
                    matrix[i][j] = 0;
                }
            }
        }
}
/ / *****************************************************************************************
