class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int N = arr.size();
        for (int i = 0; i < N; i++)
        {
            int max = -1;
            for (int j = N-1; j > i; j--)
            {
                if (arr[j] > max)
                    max = arr[j];
            }
            arr[i] = max;
        }
        return arr;
    }
};