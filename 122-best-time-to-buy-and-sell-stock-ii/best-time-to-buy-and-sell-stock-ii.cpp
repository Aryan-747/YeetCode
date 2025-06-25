class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int totalprof = 0;
        int min = prices[0];

        for(int i=1 ; i<prices.size(); i++)
        {
            if(prices[i]>min) // book profit
            {
                totalprof += prices[i]-min;
            }

            min = prices[i];
        }

        return totalprof;
        
    }
};