//optimal solution 
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>ans; //no need of hashset here
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){ 
            //if new i is same as previous i then continue will do i++
            if(i>0 && nums[i]==nums[i-1]){continue;}
            for(int j=i+1;j<n;j++){
                //if new j is same as previous j continue
                if(j!=i+1 && nums[j]==nums[j-1]){continue;}
                int k=j+1;
                int l=n-1;
            while(k<l){ //k should not cross l
                long long sum=nums[i]+nums[j];
                sum+=nums[k];
                sum+=nums[l];
                if(sum==target){
                    //answer
                    vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                    ans.push_back(temp);
                    k++; //i and j is constant , increase k and decrease l
                    l--;
                    while(k<l && nums[k]==nums[k-1]){k++;} //duplicate k skips
                    while(k<l && nums[l]==nums[l+1]){l--;} //duplicate l skips
                }
                else if(sum>target){
                    //low l value
                    l--;
                }
                else if(sum<target){
                    //increase k value
                    k++;
                }
                 }
             }
        }
    return ans;    
    }
};