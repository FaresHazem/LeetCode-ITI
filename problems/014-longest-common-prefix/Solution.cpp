class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s;
        if (strs.size() == 1) return strs[0];
        for (int i = 0; i < strs[0].size(); i++) 
        {
            int count = 1;
            for (int j = 1; j < strs.size(); j++) 
            {
                if (strs[0][i] == strs[j][i]) count++;
                if (count == strs.size())               s += strs[j][i];
            }
            if (count < strs.size()) break;
        }
        return s;
    }
};