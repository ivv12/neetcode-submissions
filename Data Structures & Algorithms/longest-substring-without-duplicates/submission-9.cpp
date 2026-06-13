class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(128,0);

        int l=0;
        int max_size=0;
        int size=0;

        for (int r=0;r<s.size();r++)
        {
            if (freq[s[r]]==0)
            {
                freq[s[r]]++;
                size++;

                if (size>max_size)
                {
                    max_size=size;
                }
            }

            else
            {
                while (freq[s[r]]>0)
                {
                    freq[s[l]]--;
                    l++;
                    size--;
                }
                freq[s[r]]++;
                size++;
            }
        }

        return max_size;
    }
};
