class Solution {
public:
    void bubbleSort(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
    int heightChecker(vector<int>& heights) {
        int count = 0;
        vector<int> expected = heights;
        bubbleSort(expected); 
        for (int i = 0; i < heights.size(); i++)
        {
            if (heights[i] != expected[i])
                count++;
        }
        return count;
    }
};