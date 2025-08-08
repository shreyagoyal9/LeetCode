class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n=nums.size();
       int count=n+1;
        
        vector<int> hasharray(count,0);
        
        for(int i=0;i<n;i++){
            hasharray[nums[i]]++;
        }
        for(int j=0;j<count;j++){
            if(hasharray[j]==0){
                return j;
            }
        }
        
  return 0;  }
};