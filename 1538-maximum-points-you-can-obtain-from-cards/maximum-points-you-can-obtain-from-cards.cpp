class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int sum = 0;
        int maxsum = 0;

        // calculating frontsum
        for(int i=0 ; i<k ; i++)
        {
            sum+=cardPoints[i];
        }
        maxsum = max(maxsum,sum);

        // removing one from front and adding one from back

        int bind = cardPoints.size()-1;
        for(int i=k-1 ; i>=0 ; i--)
        {
            sum-=cardPoints[i];
            sum+=cardPoints[bind];
            maxsum = max(maxsum,sum);
            bind--;
        }

        return maxsum;


    }
};