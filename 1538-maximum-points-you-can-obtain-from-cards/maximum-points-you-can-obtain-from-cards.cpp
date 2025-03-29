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

        for(int i=k-1 ; i>=0 ; i--)
        {
            sum -= cardPoints[i];
            sum += cardPoints[right];
            maxer = max(maxer,sum);
            right--;
        }


        return maxer;
        
    }
};