class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        // multiple transactions allowed
        int totalprof = 0;
        int min = 0;

        for(int i=1 ; i<prices.size(); i++)
        {
            // book profit since on increasing curve
            if(prices[i]>prices[i-1])
            {
                totalprof+=prices[i]-prices[i-1];
            }
        }

        return totalprof;
        
    }
};