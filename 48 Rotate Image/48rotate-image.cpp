class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size(); //no. of rows
        int m=matrix[0].size(); //no. of column
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                //transpose the matrix
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            //reverse the matrix
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};