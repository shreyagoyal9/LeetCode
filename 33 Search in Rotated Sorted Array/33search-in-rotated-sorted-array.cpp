class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){ //case 1
                return mid;
            } 
            if(nums[low]<=nums[mid]){ //case 2 //left is sorted
               if(nums[low]<=target && target<=nums[mid]){ //lies
                high=mid-1;
               }
               else{ //not lies
                low=mid+1;
               }
            }
            else{ //(nums[low]>nums[mid]) //case 3 //right sorted
                if(nums[mid]<=target && target <=nums[high]){
                    low=mid+1; //lies 
                }
                else {
                    high=mid-1; //not lies
                }
            }
        
        }
     
  return -1;  }
};