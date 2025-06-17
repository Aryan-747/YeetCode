class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int totalprofit = 0;

        for(int i=1 ; i<prices.size(); i++)
        {
            if(prices[i]>prices[i-1])
            {
                // whenever increasing slope, book profit and add to totalprofit
                totalprofit += prices[i]-prices[i-1];
            }

        }

        return totalprofit;
        
    }
};