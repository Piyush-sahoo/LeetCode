class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<bool> row(n, false);
        vector<bool> cols(m, false);

        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(matrix[i][j] == 0){
                    row[i] =true;
                    cols[j] =true;
                }
            }
        }

        for(int i = 0; i<n; i++){

            for(int j = 0; j<m; j++){
                if(row[i]== true || cols[j] == true){
                    matrix[i][j] = 0;
                }
            }
        
        }

        


        
    }
};