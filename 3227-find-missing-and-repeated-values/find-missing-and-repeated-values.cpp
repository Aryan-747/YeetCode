class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        vector<int> ab;

        for(int i=0 ; i<grid.size(); i++)
        {
            for(int j=0 ; j<grid[i].size(); j++)
            {
                ab.push_back(grid[i][j]);
            }
        }

        sort(ab.begin(),ab.end());

        int k = ab.size() +1;


        int maper[k];

        for(int i=0 ; i<k ; i++)
        {
            maper[i] = 0;
        }

        for(int i=0 ; i<ab.size();i++)
        {
            maper[ab[i]]++;
        }

        vector <int> retu;

        for(int i=0 ; i<ab.size()+1 ; i++)
        {
            if(maper[i] == 2)
            {   
                retu.push_back(i);
                break;
            }
        }

        for(int i=1 ; i<ab.size()+1 ; i++)
        {
            if(maper[i] == 0)
            {
                retu.push_back(i);
                break;
            }
        }

        return retu;
        
    }
};