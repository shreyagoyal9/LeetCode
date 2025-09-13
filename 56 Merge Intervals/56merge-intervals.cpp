class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //we need to sort based of 'start' first then 'end'
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        //vector that will store all such merged array final results
        vector<vector<int>>ans;
         for(int i=0;i<n;i++){
            int start=intervals[i][0];
            int end=intervals[i][1];
            if(!ans.empty() && end<=ans.back()[1]){ //ans is not empty & new end is less than old end , do nothing skips it
                continue;
            }
            //nested foor loop
            //from second element onwards
            //if new end is less that previous end
            for(int j=i+1;j<n;j++){
                if (intervals[j][0]<=end){
                    end=max(end,intervals[j][1]);
                }
                else break;
            }
            ans.push_back({start,end});
        }
   return ans;     
    }
};