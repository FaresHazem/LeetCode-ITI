class Solution {
public:
    int findComplement(int num) {
        int result = 0, i = 0;
        while(num != 0)
        {
            int digit = (num & 1) ? 0 : 1;
            num >>= 1;
            if (digit == 1) result += 1 << i;
            i++;
        }
        return result;
    }
};