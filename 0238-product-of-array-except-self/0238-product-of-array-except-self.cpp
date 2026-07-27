// BETTER SOLUTION (Prefix Product * Suffix Product)
//
// Time Complexity : O(N)
// Space Complexity: O(N)
//
// Idea:
// Instead of calculating prefix and suffix products for every index repeatedly,
// compute all prefix products once and all suffix products once.
// Then,
// answer[i] = prefix[i] * suffix[i]

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        // prefix[i] = product of all elements before index i
        vector<int> prefix(n);

        // suffix[i] = product of all elements after index i
        vector<int> suffix(n);

        // Final answer
        vector<int> ans(n);

        // No element exists before index 0, so prefixmultiplication =1
        prefix[0] = 1;

        // Build prefix array
        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i-1] * nums[i-1];
        }

        // No element exists after the last index, so multrip;ication is 1
        suffix[n-1] = 1;

        // Build suffix array
        for(int i = n-2; i >= 0; i--) {
            suffix[i] = suffix[i+1] * nums[i+1];
        }

        // Product except self = Prefix Product × Suffix Product
        for(int i = 0; i < n; i++) {
            ans[i] = prefix[i] * suffix[i];
        }

        return ans;
    }
};