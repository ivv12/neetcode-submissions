class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(128,0);
        int l=0;
        int max_size=0;
        int size=0;
        for (int r=0;r<s.size();r++)
        {
            while (freq[s[r]] > 0)
            {
                freq[s[l]]--;
                l++;
            }

            freq[s[r]]++;

            int curr_win = r - l + 1;
            if (curr_win > max_size) 
            {
                max_size = curr_win;
            }
        }

        return max_size;
        
    }
};
