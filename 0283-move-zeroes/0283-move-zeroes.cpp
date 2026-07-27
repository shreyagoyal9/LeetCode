//brute force without using any new array 
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        
        //iterate through each element 
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                for(int j=i;j<n;j++){
                    if(nums[j]!=0){
                        swap(nums[i],nums[j]);
                        break;
                    }
                }
            }
        }
    }
};