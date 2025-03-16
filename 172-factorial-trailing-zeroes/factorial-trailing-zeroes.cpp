class Solution {
public:
    int helper(int n) {
        if (n < 5) return 0;
        return (n / 5) + helper(n / 5);
    }

    int trailingZeroes(int n) {
        return helper(n);
    }
};