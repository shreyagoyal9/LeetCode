//boyer moore majority vote algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
       int majorityelement=nums[0]; //first one is majority
       int count=1;
        for(int i=1;i<n;i++){
            if(nums[i]==majorityelement){
                count++; //keep counting
            }
            else {
                count--; //decrease count
             if(count==0){
                majorityelement=nums[i];
                count=1;
             } }  
        }
     return majorityelement;   
    }
};