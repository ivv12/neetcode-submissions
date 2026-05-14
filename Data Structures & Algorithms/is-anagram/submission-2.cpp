class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> cnt_s;
        unordered_map<char, int> cnt_t;

        for (int i = 0; i < s.size(); i++) 
        {
            cnt_s[s[i]]++;
        }

        for (int i = 0; i < t.size(); i++) 
        {
            cnt_t[t[i]]++;
        }

        return cnt_s == cnt_t;
    }
};        