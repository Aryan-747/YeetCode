public class Solution {
    public int MaxProfit(int[] prices) {

        int maxprof = 0;

        for(int i=1 ; i<prices.Length; i++)
        {
            // book profit since increasing curve
            if(prices[i]>prices[i-1])
            {
                maxprof+= prices[i]-prices[i-1];
            }
        }
        
        return maxprof;   
    }
}