class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int totalprof = 0;

        for(int i=1 ; i<prices.size(); i++)
        {
            // book profit, since increasing curve
            if(prices[i]>prices[i-1])
            {
                totalprof+= prices[i]-prices[i-1];
            }

        }

        return totalprof;
        
    }
};