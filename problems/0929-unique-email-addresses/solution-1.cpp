class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        vector<string> verified;
        for (int i = 0; i < emails.size(); i++) {
            string email;
            bool flag1 = true, flag2 = true;
            for (int j = 0; j < emails[i].size(); j++) {
                if (flag1) {
                    if (emails[i][j] == '.')
                        continue;
                    if (emails[i][j] == '+')
                    {
                        flag1 = false;
                        flag2 = false;
                        continue;
                    }
                }
                if (emails[i][j] == '@')
                {
                    flag1 = false;
                    flag2 = true;
                }
                if (flag2) email += emails[i][j];
            }
            if (find(verified.begin(), verified.end(), email) == verified.end())
                verified.push_back(email);
            email = "";
        }
        return verified.size();
    }
};