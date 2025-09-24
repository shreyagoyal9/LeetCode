/* simple binary search approach, 2 separate functions one for first occurence another for last occurence*/
class Solution {
public:
//binary for first occurence
int firstocc(vector<int>& nums, int target){
    int low=0;
    int high=nums.size()-1;
    int first=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
            first=mid;
            high=mid-1;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
             high=mid-1;
        }

    }
    return first;
}
//binary for last occurence
int lastocc(vector<int>& nums, int target){
    int low=0;
    int high=nums.size()-1;
    int last=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
            last=mid;
            low=mid+1;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return last;
}
//here write final code in already given function
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstocc(nums,target);
        if(first==-1){ 
            return {-1,-1};
        }
        int last=lastocc(nums,target);
        return {first,last};
    }
};