class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        if (n==0) return;
        vector< pair<int,int>> zeros;
        //just store the actual zero positions in vector zeros
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if (matrix[i][j]==0){
                    zeros.push_back({i,j});
                     
                }   

            }
            }
        
        // Step 2: zero out rows and cols
        for (auto [p, q] : zeros) {
            // zero out row p
            for (int j = 0; j < m; j++) {
                matrix[p][j] = 0;
            }
            // zero out col q
            for (int i = 0; i < n; i++) {
                matrix[i][q] = 0;
            }
        }
    }
};