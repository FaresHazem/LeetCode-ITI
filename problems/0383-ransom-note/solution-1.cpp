class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mag;
        
        for (char c: magazine) mag[c]++;

        for (char c: ransomNote)
        {
            if (mag[c] > 0) mag[c]--;
            else return false;
        }
        return true;
    }
};