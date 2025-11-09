class Solution {
public:
    int countOperations(int num1, int num2) {

        int optcnt = 0;

        while(num1 !=0 && num2 != 0)
        {
            if(num1>=num2)
            {
                num1 = num1 - num2;
                optcnt++;
            }

            else
            {
                num2 = num2 - num1;
                optcnt++;
            }
        }

        return optcnt;
        
    }
};