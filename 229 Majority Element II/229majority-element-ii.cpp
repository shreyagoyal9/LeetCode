class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0; int count2=0;
        int element1=0; int element2=0;
        int counting1=0; int counting2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if (count1==0 &&nums[i]!=element2){
                element1=nums[i];
                count1=1;
            }
            else if(count2==0 && nums[i]!=element1){
                element2=nums[i];
                count2=1;
            }
            else if (nums[i]==element1){
                count1++;
                }
            else if(nums[i]==element2){
                count2++;
            }
            else {count1--;count2--;}
        }
        for(int j=0;j<n;j++){
            if(nums[j]==element1){
                counting1++;
            }
            else if(nums[j]==element2){
                counting2++;
            }
        }
        vector<int>ans;
        if(counting1>n/3){
            ans.push_back(element1);
            }
        if(counting2>n/3){ans.push_back(element2);}
        return ans;


        
   }
};