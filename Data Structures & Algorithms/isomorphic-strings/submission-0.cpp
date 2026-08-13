class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        vector<int> map_s(256, -1);
        vector<int> map_t(256, -1);

        for (int i = 0; i < s.length(); ++i) {
            char c1 = s[i];
            char c2 = t[i];

            if (map_s[c1] != map_t[c2]) {
                return false;
            }

            map_s[c1] = i;
            map_t[c2] = i;
        }

        return true;
    }
};