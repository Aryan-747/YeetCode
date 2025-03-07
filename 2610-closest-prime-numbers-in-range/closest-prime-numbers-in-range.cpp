class Solution {
public:


    vector<int> sieve(int left, int right)
    {

        vector<int> ans;

        vector<long long> primes(right+1,0);

        for(long long i=2 ; i<=right ; i++)
        {
            if(primes[i] == 0)
            {
                for(long long  j=i*i ; j<=right ; j+=i)
                {
                    primes[j] = 1;
                }
            }
        }

        for(long long i=left ; i<=right ; i++)
        {
            if(primes[i] == 0)
            {
                ans.push_back(i);
            }
        }

        return ans;

    }


    vector<int> closestPrimes(int left, int right) {

        vector<int> ans;

        if(left == 1)
        {
            left++;

        }

        ans = sieve(left,right);

        if(ans.size() == 1)
        {
            return {-1,-1};
        }

        vector<int> result = {-1,-1};

        int min_gap = INT_MAX;

        for(int i=1 ; i< ans.size();i++)
        {
            int gap = ans[i]-ans[i-1];

            if(gap<min_gap)
            {
                min_gap = gap;
                result = {ans[i-1],ans[i]};
            }
        }

        return result;

        
        
    }
};