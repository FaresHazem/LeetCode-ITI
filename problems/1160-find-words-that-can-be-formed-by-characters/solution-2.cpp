class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> counts(26, 0);
        for (char c : chars) 
            counts[c - 'a']++;
        
        int result = 0;
        for (string s: words)
        {
            vector<int> wordCount(26, 0);
            for (char c : s) 
                wordCount[c - 'a']++;
            
            bool word = true;
            for (int i = 0; i < 26; i++) 
            {
                if (counts[i] < wordCount[i]) 
                {
                    word = false;
                    break;
                }
            }
            if (word) 
                result += s.size();
        }
        return result;
    }
};