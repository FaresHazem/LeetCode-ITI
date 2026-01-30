class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> count;

        for (char c: s) count[c]++;

        for (char c: s) if (count[c] == 1) return s.find(c);
        return -1;
    }
};