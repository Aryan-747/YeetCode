class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int top,bottom,left,right;

        top = 0;
        left = 0;
        bottom = matrix.size()-1;
        right = matrix[0].size()-1;

        vector<int> returnme;

        while(top<=bottom && left<=right)
        {

            //right
            for(int i=left ; i<=right ; i++)
            {
                returnme.push_back(matrix[top][i]);
            }
            top++;

            //down
            for(int i=top ; i<=bottom ; i++)
            {
                returnme.push_back(matrix[i][right]);
            }
            right--;

            //left

            if(top<=bottom)
            {
            for(int i=right; i>=left ; i--)
            {
                returnme.push_back(matrix[bottom][i]);
            }
            bottom--;
            }

            //up
            if(left<=right)
            {
            for(int i=bottom; i>=top ; i--)
            {
                returnme.push_back(matrix[i][left]);
            }
            left++;
            }
        }

        return returnme;

      
        
    }
};