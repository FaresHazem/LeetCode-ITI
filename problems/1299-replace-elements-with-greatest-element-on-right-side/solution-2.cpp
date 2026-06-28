class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int N = arr.size();
        int max = -1;
        for (int i = N-1; i >= 0; i--)
        {
            int current = arr[i];
            arr[i] = max;
            if (current > max)
                max = current;
        }
        return arr;
    }
};