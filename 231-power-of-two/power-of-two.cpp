class Solution {
public:
    bool isPowerOfTwo(int n) {

        bool ispow = false;

        int power = 0;
        long long numba = 0;

        while(numba<=n)
        {
            numba = pow(2,power);

            if(numba == n)
            {

                ispow = true;
                return ispow;
            }

            power++;
        }


        return ispow;
        
    }
};