class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int N = nums.size();
        vector<int> sumLeft(N);
        vector<int> sumRight(N);
        
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            sum += nums[i];
            sumLeft[i] = sum;
        }

        sum = 0;
        for (int i = N - 1; i >= 0; i--)
        {
            sum += nums[i];
            sumRight[i] = sum;
        }

        for (int i = 0; i < N; i++)
        {
            if (sumLeft[i] == sumRight[i])
                return i;
        }
        return -1;
    }
};