class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // using min max

        int maxprofit = 0;
        int profit = prices[0];


        for(int i=1 ; i<prices.size(); i++)
        {
            if(profit<prices[i])
            {
                // keep checking for maximum profit
                maxprofit = max(maxprofit,prices[i]-profit);
            }

            else
            {
                // new minimum is found so update the minimum
                profit = prices[i];
            }
        }

        return maxprofit;

        
    }
};