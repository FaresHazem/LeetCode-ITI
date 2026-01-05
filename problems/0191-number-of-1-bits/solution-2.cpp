class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        for (count = 0; n != 0; count++) {
            n = n & (n - 1);
        }
        return count;
    }
};