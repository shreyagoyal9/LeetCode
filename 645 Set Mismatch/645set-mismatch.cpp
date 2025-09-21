class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>hashmap(n+1,0);
        //store counting of all in hashmap if n=6 hash map need 0 to 6 =7 places
        for(int i=0;i<n;i++){
            hashmap[nums[i]]++;
        }
        int repeating=-1;
        int missing=-1;
        for(int i=1;i<=n;i++){ //forget pace 0 as it is already 0
            if(hashmap[i]==0){
                missing=i;
            }
            else if(hashmap[i]==2){
                repeating=i;
            }
            if(repeating!=-1 && missing!=-1){ //if both are found we have to stop
                break;
            }
        }
        return {repeating, missing};
    }
};