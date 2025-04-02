class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int sum = 0;
        int r=0;
        int l=cardPoints.size()-1;
        int n=cardPoints.size();
        int maxsum = 0;

        //frontsum;
        
        while(r<k)
        {
            sum+=cardPoints[r];
            maxsum = max(maxsum,sum);
            r++;
        }
        r = r-1;
        while(r>=0)
        {
            sum-=cardPoints[r];
            sum+=cardPoints[l];
            r--;
            l--;
            maxsum = max(maxsum,sum);
        }


        return maxsum;
    }
};