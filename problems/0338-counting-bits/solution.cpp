class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1);
        ans[0] = 0;
        int currentPowerOfTwo = 1;
        for (int i = 1; i <= n; i++)
        {
            if ((i & (i - 1)) == 0)
                currentPowerOfTwo = i;
            ans[i] = 1 + ans[i - currentPowerOfTwo];
        }
        return ans;
    }
};