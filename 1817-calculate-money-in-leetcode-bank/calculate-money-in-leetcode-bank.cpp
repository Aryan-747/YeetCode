class Solution {
public:
    int totalMoney(int n) {
      
      int mon = 0;
      int count = 0;
      int totbal = 0;

      for(int i=1 ; i<=n ; i++)
      {
        if(count == 7)
        {
            mon = i/7 + 1;
            count = 0;
        }
        else
        {
            mon++;
        }

        totbal+=mon;
        count++;
      }

      return totbal;
      
    }
};