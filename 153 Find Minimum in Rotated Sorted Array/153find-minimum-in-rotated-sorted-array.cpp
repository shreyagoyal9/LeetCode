//optimal solution
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            //if search space is already sorted i.e nums[low]<=nums[mid] && nums[mid]<=nums[high] so together it can be written as nums[low]<=nums[high] then we can directly return low and stop
            if(nums[low]<=nums[high]){
                ans=min(ans,nums[low]);
                break;
            }
            if(nums[low]<=nums[mid]){ //sorted part min=low
                ans=min(ans,nums[low]);
                low=mid+1;
            }
            else {// nums[mid]<=nums[high]
               ans=min(ans,nums[mid]); //sorted part min=mid
               high=mid-1; }
        }
        
    return ans;}
};