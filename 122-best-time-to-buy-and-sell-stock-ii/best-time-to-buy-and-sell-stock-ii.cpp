class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxprof = 0;
        int dihh = prices[0];
        
        for(int i=1 ; i<prices.size(); i++)
        {
            if(prices[i]>dihh)
            {
                maxprof += prices[i]-dihh;
            }

            dihh = prices[i];
        }

        return maxprof;
        
    }
};