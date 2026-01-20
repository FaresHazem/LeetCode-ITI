class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> map;
        for (int i = 0; i < s.size(); i++)
        {
            if (!map.contains(s[i])) map.insert({s[i],1});
            else map[s[i]]++; 

            if (!map.contains(t[i])) map.insert({t[i],-1});
            else map[t[i]]--; 
        }
        for (auto m: map)
        {
            if(m.second != 0) return false;
        }
        return true;
    }
};