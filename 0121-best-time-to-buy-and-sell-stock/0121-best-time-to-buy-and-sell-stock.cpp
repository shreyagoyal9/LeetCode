class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        //set minimum as fist element
        int mini=prices[0];
        int profit=0;

        for(int i=1;i<n;i++){
           int cost=prices[i]-mini; //cost of that day
            profit=max(profit,cost);
            mini=min(mini,prices[i]); //keep track of cheapest day price
        }
        
   return profit;  }
};