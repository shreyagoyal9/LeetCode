//KADANE'SALGORITHM: OPTIMAL APPROACH 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN; 
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum>=maxi){
                maxi=sum;
            }
            if(sum<0){ //if sum is getting negative no need to   take that sum so start again with zero 
                sum=0;
            }
        }

   return maxi; }
};