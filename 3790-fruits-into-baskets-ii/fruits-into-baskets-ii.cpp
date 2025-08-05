class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {

        int n = fruits.size();
        int placed = 0;
        vector<int> isplaced(n,0);

        for(int i=0 ; i<fruits.size(); i++)
        {
            for(int j=0 ; j<baskets.size(); j++)
            {
                if(isplaced[j] == 0 && baskets[j]>=fruits[i])
                {
                    placed++;
                    isplaced[j] = 1;
                    break;
                }
            }
        }

        return n-placed;


        
    }
};