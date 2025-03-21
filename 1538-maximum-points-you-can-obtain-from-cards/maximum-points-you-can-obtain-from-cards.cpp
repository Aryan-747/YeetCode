class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int maxu = INT_MIN;

        int lsum = 0;
        int rsum = 0;
        int rind = cardPoints.size()-1;

        for(int i=0 ; i<k ; i++)
        {
            lsum += cardPoints[i];
        }

        maxu = max(lsum,maxu);

        for(int i=k-1; i>=0 ; i--)
        {
            lsum = lsum - cardPoints[i];
            rsum = rsum + cardPoints[rind];
            rind--;

            maxu = max(maxu,lsum+rsum);
        }

        return maxu;
        
    }
};