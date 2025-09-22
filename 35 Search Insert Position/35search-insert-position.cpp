class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        
        while(low<=high){
            int mid=low+((high-low)/2);
            
            if(nums[mid]==target){ //base case
                return mid;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }


        }
         //if not found anything then the low is itself the index answer
 return low;   }
};