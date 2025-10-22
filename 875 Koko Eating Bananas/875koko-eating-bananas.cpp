#include<bits/stdc++.h>
class Solution {
public:
//i to max element value so find max
    int findMax (vector<int>& piles){
        int n=piles.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,piles[i]);
        }
        return maxi;
    }

//each value is divided by mid & totalhour cacluated to compare 
    long long calculateTotalHour(vector<int>& piles, int mid){
        long long totalhour=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            totalhour+=ceil((double)piles[i]/(double)mid);
        }
        return totalhour;
    }

//final computing everything 
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1; 
        int high=findMax(piles);
        while(low<=high){
            int mid=low+(high-low)/2; //runtime avoid
            long long totalhour=calculateTotalHour(piles,mid);
            if(totalhour<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        
   return low; } //inititaly low is not possible so it end up at
                 //being possible so always return low 
};