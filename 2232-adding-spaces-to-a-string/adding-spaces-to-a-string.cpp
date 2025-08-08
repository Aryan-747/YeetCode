class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {

        
        string newstring ="";
        int index = 0; // used to traverse the spaces array

     

        int f = s.length();


        for(int i=0 ; i<f; i++)
        {
            // breakoutcase
            if(s[i] == ' ')
            {
                break;
            }

            else if(index>=spaces.size())
            {

            }

            else if(spaces[index] == i)
            {
                newstring+=" ";
                index++;
            }
            newstring+=s[i];
            
        }

        return newstring;

    
        
    }
};