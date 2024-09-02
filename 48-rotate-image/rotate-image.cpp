class Solution {
public:
    
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size(), m = matrix[0].size();
        for(int i = 0; i<n; i++){
            for(int j = 0; j<i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // int n = matrix.size(), m = matrix[0].size();
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n/2; j++){
                swap(matrix[i][j], matrix[i][m-j-1]);
            }
        }

        // return matrix;


        
    }
};