class Solution {
public:
    int maxDifference(string s) {
        vector<int> cnt(26, 0);

        for (char c : s)
        {
            cnt[c - 'a']++;
        }

        int maxOdd = 0;
        int minEven = INT_MAX;

        for (int f : cnt) 
        {
            if (f == 0) 
            {
                continue;
            }

            if (f % 2)
            {
                 maxOdd = max(maxOdd, f);
            }

            else
            {
                minEven = min(minEven, f);
            }
            
        }

        return maxOdd - minEven;
    }
};