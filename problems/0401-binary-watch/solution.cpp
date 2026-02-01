class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> result;
        for (int hour = 0; hour <= 11; hour++) {
            
            int hBits = __builtin_popcount(hour);

            for (int minute = 0; minute <= 59; minute++) {
                int mBits = __builtin_popcount(minute);

                if (hBits + mBits == turnedOn) {
                    string time = to_string(hour) + ":" + 
                                (minute < 10 ? "0" : "") + 
                                to_string(minute);
                    result.push_back(time);
                }
            }
        }
        return result;
    }
};