class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> result;
        for (int i = 0; i < words.size(); i++)
        {
            bool foundMatch = false;
            for (int j = 0; j < words.size(); j++)
            {
                if (i == j) continue;
                if (words[i].size() > words[j].size()) continue;
                for (int k = 0; k <= words[j].size() - words[i].size(); k++)
                {
                    bool matched = true;
                    for (int u = 0; u < words[i].size(); u++)
                    {
                        if (words[j][k+u] != words[i][u]) 
                        {
                            matched = false;
                            break;  
                        }
                    }
                    if (matched) 
                    {
                        foundMatch = true;
                        break;
                    }
                }
                if (foundMatch) break;
            }
            if (foundMatch) result.push_back(words[i]);
        }
        return result;
    }
};