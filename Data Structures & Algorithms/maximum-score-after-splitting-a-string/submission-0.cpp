class Solution {
public:
    int maxScore(string s) {
        int ones = 0;
        for (char c : s) 
        {
            if (c == '1') 
            {
                ones++;
            }
        }
        
        int ans = 0, zeros = 0;
        int left = 0;

        for (int i = 0; i < s.size() - 1; i++) 
        {
            if (s[i] == '0') 
            {
                zeros++;
            }
            else 
            {
                left++;
            }
            ans = max(ans, zeros + (ones - left));
        }
        return ans;
    }
};