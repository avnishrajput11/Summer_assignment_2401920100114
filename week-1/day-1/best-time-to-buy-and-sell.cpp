class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=INT_MIN;
        int buy=INT_MAX;
        for(int i=0;i<n;i++){
            buy=min(prices[i],buy);
            profit=max(profit,prices[i]-buy);
            if(profit<0)profit=0;
        }
        return profit;
    }
};