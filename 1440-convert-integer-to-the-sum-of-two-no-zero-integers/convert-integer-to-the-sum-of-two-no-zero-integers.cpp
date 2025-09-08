class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        
        vector<int> f;


        for(int i=1 ; i<=n ; i++)
        {
            int a = i;
            int b = n-i;

            bool aisnonzero = true;
            bool bisnonzero = true;


            int temp_a = a;
            int temp_b = b;

            // checking if a is nonzero
            while(temp_a>0)
            {
                int dig = temp_a%10;

                if(dig == 0)
                {
                    aisnonzero = false;
                    break;
                }

                temp_a = temp_a/10;
            }

            // checking if b is nonzero
            while(temp_b>0)
            {
                int dig = temp_b%10;

                if(dig == 0)
                {
                    bisnonzero = false;
                    break;
                }

                temp_b = temp_b/10;
            }


            if(aisnonzero && bisnonzero)
            {
                f.push_back(a);
                f.push_back(b);

                return f;
            }


         
        }

        return {-1,-1};


    }
};