class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return n;
        if (n == 2) return n;

        int a = 1, b = 2, f;

        for (int i = 3; i <= n; i++) {
            f = a + b;
            a = b;
            b = f;
        }
        
        return f;
    }
};