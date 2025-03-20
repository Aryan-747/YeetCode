class Solution {
public:
    bool isPalindrome(int x) {

        long int rev = 0;
        long int dig = 0;
        long int count = 0;

        long int x1 = x;
        long int fin = x;

        while(x1>0)
        {
            x1 = x1/10;
            count++;
        }

        count = count-1;

        while(count>=0)
        {
          dig = x%10;
          x = x/10;
          rev += dig*pow(10,count);
          count--;
        }

        if(fin == rev)
        {
            return true;
        }

        else
        {
            return false;
        }




}
};