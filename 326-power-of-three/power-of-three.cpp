class Solution {
public:
    bool isPowerOfThree(int n) {

        if(n<=0)
        {
            return false;
        }
        bool returner = false;
        long long power = 0;

        for(int i=0 ; i<n ; i++)
        {
            power = (long )pow(3,i);

            if(power == n)
            {
                returner = true;
                break;
            }

            else if (power>n)
            {
                break;
            }
        }

        return returner;
        
    }
};