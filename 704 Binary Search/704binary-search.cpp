class Solution {
public:
  //this is our own recursive function 
        int recf(vector<int>&nums,int low, int high,int target){
            int mid=(low+high)/2;

            if(nums[mid]==target){ //equality case
                return mid;
            }

            else if(low>high) {
                return -1; //base edge exhaustive case
            }
            else if(nums[mid]<target){
                return recf(nums,mid+1,high,target);
            }
            return recf(nums,low,mid-1,target);
        }
        
     //this function is given is question so here just call our function defining low=0 high=n-1 etc etc   
    int search(vector<int>& nums, int target) {
        return recf(nums,0,nums.size()-1,target);
        
   }
};