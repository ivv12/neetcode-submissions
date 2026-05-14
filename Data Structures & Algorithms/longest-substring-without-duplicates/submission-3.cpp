class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Use 128 to handle non-alphabetic characters and avoid crashes
        vector<int> freq(128, 0); 
        int l = 0;
        int max_size = 0;
        int size = 0;
        
        for (int r = 0; r < s.size(); r++)
        {
            while (freq[s[r]] > 0)
            {
                freq[s[l]]--;
                l++;
                size--; 
            }

            
            freq[s[r]]++;
            size++;
            if (size > max_size)
            {
                max_size = size;
            }
        }

        return max_size;
    }
};