class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int left = 0;       // points at first element
        int right = m - 1;  // points last element of first row
        int top = 0;        // points same first element
        int bottom = n - 1; // points last row first element
        vector<int> ans;    // temporary vector to store
        while (left <= right && top <= bottom) { // even if there is one line loop runs
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;
            if (top <=bottom) { /*checking condition is important to check
                          we still have a row otherwise where will you print*/
                for (int i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if (left <= right) { // similarly we still have column
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};