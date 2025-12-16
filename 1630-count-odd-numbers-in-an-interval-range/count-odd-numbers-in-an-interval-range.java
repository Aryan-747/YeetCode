class Solution {
    public int countOdds(int low, int high) {


        int cnt = 0;

        // O(n) time complexity
        // O(1) space complexity
        /*
        for(int i=low ; i<=high; i++)
        {
            if(i%2!=0)
            {
                cnt++;
            }
        } */

        // since constraints are too big we need constant time solution

        // finding number of integers in range

        int nn = high-low+1;

        if(nn%2 == 0) // even
        {
            return nn/2; // number of odd numbers
        }

        else
        {
            if(low%2!=0 || high%2!=0)
            {
            return (nn/2)+1; // number of odd numbers
            }
            else
            {
                return nn/2;
            }
        }
        
    }
}