class Solution {
public:
    void prime(vector<int> &primes)
    {
        primes[0] = 1; // not prime
        primes[1] = 1; // not prime

        for(int i=2 ; i<primes.size(); i++)
            {
                for(int j=i*i ; j<primes.size(); j+=i)   
                    {
                        primes[j] = 1;
                    }
            }
    }
    
    bool checkPrimeFrequency(vector<int>& nums) {

        vector<int> primes(101,0);
        prime(primes); // 0 to 100

        vector<int> hmap(101,0);
        
        for(int i=0 ; i<nums.size(); i++)
            {
                hmap[nums[i]]++;
            }


        for(int i=0 ; i<hmap.size() ; i++)
            {
                if(primes[hmap[i]] == 0)
                {
                    return true;
                }
            }

        return false;
        
    }
};