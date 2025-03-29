class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int left = 0;
        int right = cardPoints.size()-1;

        int maxer = 0;

        int lsum = 0;
        int rsum = 0;

        while(left<k)
        {
            lsum+=cardPoints[left];
            left++;
        }

        maxer = max(lsum,maxer);

        for(int i=k-1 ; i>=0 ; i--)
        {
            lsum -= cardPoints[i];
            rsum += cardPoints[right];
            maxer = max(maxer,lsum+rsum);
            right--;
        }


        return maxer;
        
    }
};