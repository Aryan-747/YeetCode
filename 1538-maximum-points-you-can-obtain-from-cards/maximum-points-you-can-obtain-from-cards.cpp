class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int left = 0;
        int right = cardPoints.size()-1;

        int maxer = 0;

        int sum = 0;

        while(left<k)
        {
            sum+=cardPoints[left];
            left++;
        }


        maxer = max(sum,maxer);

        while(left-1>=0)
        {
            sum-= cardPoints[left-1];
            sum+= cardPoints[right];

            maxer = max(maxer,sum);
            left--;
            right--;
        }


        return maxer;
        
    }
};