class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maximumProfit=0;
        int lowestBuy= INT_MAX;
        for(int i=0;i<prices.size();i++){
            lowestBuy=min(lowestBuy,prices[i]);
            maximumProfit= max(maximumProfit,prices[i]-lowestBuy);
        }
        return maximumProfit;

    }
};