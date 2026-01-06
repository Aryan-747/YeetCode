class Solution {
public:

    int fsum(vector<int> &nums)
    {
        int sumof4 = 0;
        for(int i=0 ; i<nums.size(); i++)
        {
            int numofdiv = 2;
            int divsum = 1+nums[i];

            int squareroot = (int)sqrt(nums[i]);

            for(int j=2 ; j<nums[i] ; j++)
            {
                if(numofdiv>4)
                {
                    break;
                }

                if(nums[i]%j == 0)
                {
                    divsum+=j;
                    numofdiv++;
                }
            }

            if(numofdiv == 4)
            {
                sumof4+=divsum;
            }
        }

        return sumof4;
    }

    int sumFourDivisors(vector<int>& nums) {

        int sum = fsum(nums);

        return sum;
        
    }
};