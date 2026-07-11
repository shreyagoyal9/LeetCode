//optimal 2 pointers approach 

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=-1;
        //first find the index of first non zero and as soon as found break it
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }

        //if no zero is there 
        if(j==-1){
            return; //void only exit out from loop
        }
        //now keep i pointer just after the j and do swapping
        for(int i=j+1;i<n;i++){
            if(nums[i]!=0){
                swap(nums[j],nums[i]);
                j++; //as nums[j] got swapped so j should also increase right so i will automatically take j+1 and if i also landed in zero it will do i++
            }
        }
        
    }
};