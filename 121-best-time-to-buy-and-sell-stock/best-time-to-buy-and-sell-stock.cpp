class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int mini = prices[0];
        int maxprof = INT_MIN;

        for(int i=1 ; i<prices.size(); i++)
        {
            if(prices[i]<mini)
            {
                mini = prices[i];
            }

            // book profit
            else
            {
            int profit = prices[i]-mini;
            maxprof = max(maxprof,profit);
            }

        }

        if(maxprof == INT_MIN)
        {
            return 0;
        }

        return maxprof;
        
    }
};