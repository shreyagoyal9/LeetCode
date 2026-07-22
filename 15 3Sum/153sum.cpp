class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){//fix i at first
            int j=i+1; //j is moveable just after i
            int k=n-1; // k is last element 
            if(i>0 && nums[i]==nums[i-1]){continue;} //skip the repeated nums[i]
            while(j<k){  //k should not cross j
            if(i!=j && i!=k && j!=k){
              long long sum=(long long)nums[i]+nums[j]+nums[k];
              if(sum==0){
                ans.push_back({nums[i],nums[j],nums[k]});
                j++;
                k--;
                while(j<k && nums[j]==nums[j-1]){j++;} //skip repeated nums[j]
                while(j<k && nums[k]==nums[k+1]){k--;} //skip repeated nums[k]

              }
              else if(sum<0){j++;}
              else k--;
            }
            
        }
        }
  return ans; 
   }
};