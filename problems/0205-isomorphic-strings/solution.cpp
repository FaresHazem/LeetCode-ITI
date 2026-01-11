class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char,char> c1, c2;
        for (int i = 0; i < s.length(); i++)
        {
            auto val1 = c1.find(s[i]);
            if (val1 != c1.end())
            {
                if (t[i] == val1->second) continue;
                else return false;
            }
            else
            {
                auto val2 = c2.find(t[i]);
                if(val2 == c2.end())
                {
                    c1[s[i]] = t[i];
                    c2[t[i]] = s[i];
                }
                else return false;
            }
        }
        return true;
    }
};