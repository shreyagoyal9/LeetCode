class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int firstpositive=0; //we have to assume first positive in 0 index
        int firstnegative=1; //we have to assume first negative in 1 index
        vector<int>temp(n,0);
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                temp[firstpositive]=nums[i];
                firstpositive+=2;// 0+2+4+6+8...... thatwhy first 0 is taken
            }
            else{
                temp[firstnegative]=nums[i];
                firstnegative+=2; //1+3+5+7....... thatswhy first 1 is taken
            }
        }return temp;
        
    }
};