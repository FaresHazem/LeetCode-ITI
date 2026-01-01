class Solution {
public:
    int reverseBits(int n) {
        int result = 0;
        for (int i = 0; i < 32; i++) {
            int bit = n & 1;        // 1) extract last bit
            result = result << 1;   // 2) make space
            result |= bit;          // 3) insert bit
            n = n >> 1;             // 4) move to next bit
        }
        return result;
    }
};
