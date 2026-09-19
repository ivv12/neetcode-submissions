class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;

        vector<int> freq(26, 0);

        for (char c : chars) 
        {
            freq[c - 'a']++;
        }

        for (string word : words) 
        {
            vector<int> temp = freq;
            bool possible = true;

            for (char c : word) 
            {
                temp[c - 'a']--;

                if (temp[c - 'a'] < 0) 
                {
                    possible = false;
                    break;
                }
            }

            if (possible)
                ans += word.length();
        }

        return ans;
    }
};