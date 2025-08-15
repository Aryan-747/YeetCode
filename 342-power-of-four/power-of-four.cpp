class Solution {
public:
    bool isPowerOfFour(int n) {

        int power = 0;
        int ner = 4;

        long long number = 0;

        for(int i=0 ; i<=31 ; i++)
        {
            number = pow(ner,power);

            if(number == n)
            {
                return true;
            }

            power++;
        }
        
        return false;
    }
};