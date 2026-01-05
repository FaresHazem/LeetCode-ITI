class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        for (int i = 0; n != 0; i++) {
            if(n & 1) count++;
            n = n >> 1;
        }
        return count;
    }
};