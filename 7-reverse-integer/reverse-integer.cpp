class Solution {
public:
    int reverse(int x) {
        
        // edge case

        if(x == 0)
        {
            return 0;
        }

        if(x>0) // positive number
        {
            long rev = 0;
            long dig = 0;

            while(x>0)
            {
                dig = x%10;
                rev = rev*10 +dig;

                if(rev>pow(2,31)-1)
                {
                    return 0;
                }

                x = x/10;
            }

            return rev;
        }

        else // negative number
        {

            long rev = 0;
            long dig = 0;

            while(x<0)
            {
                dig = x%10;
                rev = rev*10+dig;

                if(rev<pow(-2,31))
                {
                    return 0;
                }

                x = x/10;
            }

            return rev;

        }
        
    }
};