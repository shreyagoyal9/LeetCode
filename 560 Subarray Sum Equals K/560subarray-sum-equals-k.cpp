//optimal solution 
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        int countsubarray=0;
        unordered_map<int,int>mpp;
        mpp[0]=1; //base case if sum=k so sum-k=0 should there in the map 1 times 
                  // no. of sum-k = num of k, then only it will aceept that k sub
                  //array
        for(int x:nums){
            sum+=x;
            if(mpp.count(sum-k)){
                countsubarray+=mpp[sum-k]; //add freqeuncy(value) becuase if sum-k
                                           // exist two times than definitely k 
                                           //subarray also exists two times
            }
            //if sum-k doesnot exists
            mpp[sum]++; //if sum-k is not in the map so store that sum with value1
        }
        return countsubarray;
        
    }
};