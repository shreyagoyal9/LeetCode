#include<bits/stdc++.h>
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size(); int mid=0; int low=0; int high=n-1;
        //for loop will not work 
        while(mid<=high){
            if (nums[mid]==0){ //instead of nums i , play with nums mid
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[high],nums[mid]);
                high--;
            }
        } 

    }
        
    
};