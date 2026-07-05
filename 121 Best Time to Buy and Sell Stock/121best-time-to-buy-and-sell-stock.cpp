class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int mini=prices[0]; //take first one as minimum
        int profit=0; //it is the maximum profit
        int currentprofit=0;
        for(int i=1;i<n;i++){
           currentprofit=(prices[i]-mini);
            profit=max(profit,currentprofit);
            mini=min(mini,prices[i]); //update mini after each 
        }
        return profit;
        
   }
};