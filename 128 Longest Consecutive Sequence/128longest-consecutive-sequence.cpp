// onlogn
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){return 0;}
        //set remove duplicates and sorted 
        set<int>setyes(nums.begin(),nums.end());
        int count=1;
        int maxcount=1;
        // it is pointer *it is the value in it
        auto first = setyes.begin();      //store first value
        for (auto it = next(setyes.begin()); it != setyes.end(); it++) {
            if (*it == *first + 1) {
                count++;
                maxcount = max(maxcount, count);
            } else {
                count = 1; // reset sequence
              }
            first = it; 
        }

        return maxcount;
    }
};