class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int n=nums.size();
        int count=0;
        int maxfound=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){ //make count increase if 1 
                count++;
            }
            else {count=0;} //make count to 0 if spotted 0 ever aafter 1
            maxfound=max(maxfound,count); //keep remember the maximum found 1
        }
        return maxfound;
    return 0;}
};