class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int breakpoint;
        
        //to find the breakpoint
        for(int i=n-2; i>=0;i--){
            if(nums[i]<nums[i+1]){
             breakpoint= i;
                break;
            }   
        }
        //reverse the wholee array if already at last permutation so give firstone
        if(breakpoint== -1){
            reverse(nums.begin(),nums.end());
            return;
        } 
        //first the no. just bada breakpoint se aur usi k saath swap hoga
        // hosakta tha 3542 ho toh 35 nahi 34 swap hoga

        for(int i=n-1;i>breakpoint;i--){
            if(nums[i]>nums[breakpoint]){
                swap(nums[i],nums[breakpoint]);
                break;
            }
           

        }reverse(nums.begin()+breakpoint+1,nums.end());
        
        
        
    }
};