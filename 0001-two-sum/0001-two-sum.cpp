//Better solution using hashmap
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //putting the element and its index in hashmap, if not seen then proceed and put, if seen then return 
        
        int n=nums.size();
        map<int,int>hashmap;
        for(int i=0;i<n;i++){
            int needmore=target-nums[i];
            if(hashmap.find(needmore)!=hashmap.end()){
                return {hashmap[needmore],i};
            }
            else{
                hashmap[nums[i]]=i;
            }
        }
return{-1,-1};
    }
};