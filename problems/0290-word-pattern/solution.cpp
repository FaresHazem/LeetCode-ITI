class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        vector<string> words;
        string word;

        while (ss >> word) {
            words.push_back(word);
        }

        if(pattern.size() != words.size()) return false;
        
        unordered_map<char, string> m1;
        unordered_map<string, char> m2;
        
        for(int i = 0; i < pattern.size(); i++)
        {
            if (!m1.contains(pattern[i]) && !m2.contains(words[i])) 
            {
                m1[pattern[i]] = words[i];
                m2[words[i]] = pattern[i];
            }
            else
            {
                if (m1[pattern[i]] != words[i]) return false;
                if (m2[words[i]] != pattern[i]) return false;
            }
        }
        return true;
    }
};