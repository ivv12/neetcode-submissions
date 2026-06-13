class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26,0);
        int max_freq=0;
        int best = 0;
        int l=0;

        for (int r=0;r<s.size();r++)
        {
            freq[s[r]-'A']++;

            max_freq=max(freq[s[r]-'A'],max_freq);

            while ((r-l+1)-max_freq>k)
            {
                freq[s[l]-'A']--;
                l++;
            }

            best=max(best,r-l+1);
            
        }

        return best;

    }
};
