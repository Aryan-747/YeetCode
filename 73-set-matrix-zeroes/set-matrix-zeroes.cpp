class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int n = matrix.size(); // number of rows
        int m = matrix[0].size(); // number of columns     


        vector<bool> rowcheck(n,false); // track of rows
        vector<bool> colcheck(m,false);  // track of columns


        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<m ; j++)
            {
                if(matrix[i][j] == 0)
                {
                    rowcheck[i] = true;
                    colcheck[j] = true;
                }
            }
        }

        // setting zeroes

        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<m ; j++)
            {
                if((rowcheck[i]) || (colcheck[j]))
                {
                    matrix[i][j] = 0;
                }
            }
        }

    }
};