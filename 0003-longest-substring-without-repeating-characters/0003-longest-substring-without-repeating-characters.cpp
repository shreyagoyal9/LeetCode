//brute force solution 
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int maxlength=0;

        for(int i=0;i<n;i++){
            
        //everytime we have to check if same element is appeared or not so it will be remembered in the hash 
            vector<int>hash(256,0);

            for(int j=i;j<n;j++){
                if(hash[s[j]]==1)break;
                int length=j-i+1;
                maxlength=max(length,maxlength);

                //needs to remember 
                hash[s[j]]=1;
            }
        }

        return maxlength;
    }
};