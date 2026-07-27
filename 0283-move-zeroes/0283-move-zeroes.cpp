//optimal 2 pointer approach 

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        //put j on first 0 element's index, so set it to -1 if no 0 exists.
        int j=-1;

        //find index of first 0 and break (we got our j)
        for(int i=0;i<n;i++){
            if (nums[i]==0){
                j=i;
                break; //the moment break executes entire for loop ends
            }
            
        }
        // If there is no zero, the array is already in the required form.
         if(j == -1)
             return;

        //keep i just after j and if i is non zero swap i and j 
        for(int i=j+1;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};