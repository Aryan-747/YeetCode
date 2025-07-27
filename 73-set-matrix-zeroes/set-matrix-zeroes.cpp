class Solution {
public:


    void markrow(int i,int col,vector<vector<int>> &matrix)
    {
        for(int j=0 ; j<col ; j++)
        {
            if(matrix[i][j]!=0)
            {
                matrix[i][j] = INT_MIN+5;
            }
        }

    }

    void markcol(int j, int row,vector<vector<int>> &matrix)
    {

        for(int i=0 ; i<row ; i++)
        {
            if(matrix[i][j] != 0)
            {
                matrix[i][j] = INT_MIN+5;
            }
        }
    }


    void setZeroes(vector<vector<int>>& matrix) {

            int row = matrix.size();
            int col = matrix[0].size();
            bool flag = false;

            for(int i=0 ; i<row ; i++)
            {
                for(int j=0 ; j<col ; j++)
                {
                    if(matrix[i][j] == 0)
                    {
                        flag = true;
                        markrow(i,col,matrix);
                        markcol(j,row,matrix);
                    }
                }
            }

            if(flag)
            {
            // traversing matrix again and changing -1's to zeroes
                for(int i=0 ; i<row ; i++)
                {
                    for(int j=0 ; j<col ; j++)
                    {
                        if(matrix[i][j] == INT_MIN+5)
                        {
                        matrix[i][j] = 0;
                        }
                    }
                }
            }

    }
};