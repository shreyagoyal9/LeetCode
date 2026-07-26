//optimal approach-KADANE'S ALGORITHM IS THE OPTIMAL SOLUTION
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxsum=INT_MIN;
        int sum=0;

        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            maxsum=max(maxsum,sum);

            //taking negative sum forward wont make sense so whenever a negative sum comes leave it 
            if(sum<0){
                sum=0;
            }
            
        }
    return maxsum;    
    }
};


/*if the question asked to print that subarray
maxsum=INT_MIN;
sum=0;
ansStart=-1;
ansEnd=-1;

for(int i=0;i<n;i++){
    if(sum==0) start = i;
    sum=sum+arr[i];
    if(sum>maxsum){
    maxsum=sum;
    ansStart=start,ansEnd=i;
    }
    if(sum<0){
    sum=0;
    }
    }*/
