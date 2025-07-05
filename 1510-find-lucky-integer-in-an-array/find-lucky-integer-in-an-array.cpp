class Solution {
public:
    int findLucky(vector<int>& arr) {

        vector<int> heshmap(501,0);

        for(int i=0 ; i<arr.size(); i++)
        {
            heshmap[arr[i]]++;
        }

        for(int i=heshmap.size()-1; i>=1 ; i--)
        {
            if(heshmap[i] == i)
            {
                return i;
            }
        }

        return -1;        
    }
};