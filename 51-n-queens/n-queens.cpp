class Solution {
public:

    void solve(vector<vector<string>> &ans, vector<string> &board, vector<int> &rowleft, vector<int> &lowerdiag, vector<int> &upperdiag,int col, int n)
    {

        if(col>=n)
        {
            ans.push_back(board);
            return;
        }

        for(int row = 0 ; row<n ; row++)
        {
            if(rowleft[row] == 0 && lowerdiag[col+row] == 0 && upperdiag[(n-1)+(col-row)] == 0)
            {
                board[row][col] = 'Q';
                rowleft[row] = 1;
                lowerdiag[col+row] = 1;
                upperdiag[(n-1)+(col-row)] = 1;
                solve(ans,board,rowleft,lowerdiag,upperdiag,col+1,n);
                board[row][col] = '.';
                rowleft[row] = 0;
                lowerdiag[col+row] = 0;
                upperdiag[(n-1)+(col-row)] = 0;
            }
        }

    }



    vector<vector<string>> solveNQueens(int n) {

        vector<vector<string>> ans;

        int col = 0;

        vector<string> board(n);

        string s(n,'.');

        for(int i=0 ; i<n ; i++)
        {
            board[i] = s;
        }

        vector<int> rowleft(n,0);
        vector<int> lowerdiag(2*n-1,0);
        vector<int> upperdiag(2*n-1,0);

        solve(ans,board,rowleft,lowerdiag,upperdiag,col,n);

        return ans;
        
    }
};