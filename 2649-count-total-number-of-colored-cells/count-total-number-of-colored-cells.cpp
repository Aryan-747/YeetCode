class Solution {
public:
    long long coloredCells(long long n) {

      return (long long )(1 + 4* ((n-1)*n/2));
        
    }
};