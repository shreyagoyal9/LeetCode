class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%nums.size(); //if k exceeds a complete rotation
        vector<int> temp(n); //another array temp
        for(int i=n-k;i<n;i++){
            temp[i-n+k]=nums[i]; //putting after kth element in temp
        }
        for(int j=0;j<=n-k-1;j++){
            temp[k+j]=nums[j];     //again remaining elements shifting 
        }
        for(int i=0;i<n;i++){
            nums[i]=temp[i];
        }
        
    }
};