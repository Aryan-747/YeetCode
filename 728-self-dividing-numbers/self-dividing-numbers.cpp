class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {

        vector<int> smd;

        for(int i = left ; i<=right ; i++)
        {
            int fd = i;

            int dig = 0;
            int len = 0;
            int pop = 0;

            while(fd>0)
            {
                dig = fd%10;

                if(dig == 0)
                {
    
                }

                else if(i%dig == 0)
                {
                    pop++;
                }
                fd = fd/10;
                len++;
            }

            if(pop == len)
            {
                smd.push_back(i);
            }
        }
        return smd;
    }
};