class Solution {
public:
    int maxProduct(int n) {

        int maxu = INT_MIN;

        vector<int> arr;

        while(n>0)
        {
            int dig = n%10;
            arr.push_back(dig);
            n = n/10;
        }

        for(int i=0 ; i<arr.size()-1 ; i++)
        {   
            int cnt = 0;

            for(int j=i+1; j<arr.size(); j++)
            {
               int prod = arr[i]*arr[j];
               maxu = max(maxu,prod);
            }   
        }

        return maxu;
        
    }
};