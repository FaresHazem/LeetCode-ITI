class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0, min = 10001;
        for (int k = 0; k < prices.size(); k++)
        {
            if (prices[k] < min)        min = prices[k];
            if (prices[k] - min > max)  max = prices[k] - min;
        }
        return max;
    }
};