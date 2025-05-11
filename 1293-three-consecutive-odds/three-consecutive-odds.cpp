class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {

        int n = arr.size();

        if(n<3)
        {
            return false;
        }

        int odd = 0;
        int k = 0;

        for(int i=2; i<n ; i++)
        {
            for(int j=k ; j<=i ; j++)
            {
                if(arr[j]%2 != 0)
                {
                    odd++;
                }
            }

            if(odd == 3)
            {
                return true;
            }
            k++;
            odd = 0;
        }

        return false;
        
    }
};