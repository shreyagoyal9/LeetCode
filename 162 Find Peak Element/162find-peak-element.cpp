class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
    //edge case 1: only 1 element - infinity<nums[0]>- infinity
        if (n==1){ return 0;}
    //-infinity on both side so check for first and last element
        if(nums[0]>nums[1]){return 0;}
        if(nums[n-1]>nums[n-2]){return n-1;}
        //trim down the search space
        int low=1;
        int high=n-2;
        while(low<=high){
             int mid=(low+high)/2;
             //if mid itself is the answer
             if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
             }
             //increasing slope so peak on right
             else if (nums[mid]>nums[mid-1]){
                low=mid+1;
             }
             //decreasing slope so peak on left
             //also if multiple peak exists this statement will execute   
            else  high=mid-1;  
        }
        
   return -1; }
};