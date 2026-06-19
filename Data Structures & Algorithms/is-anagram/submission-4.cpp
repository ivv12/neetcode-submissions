class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> dict1;
        unordered_map<char,int> dict2;

        if (s.size()!=t.size())
        {
            return false;
        }

        else
        {
            for (int i=0;i<s.size();i++)
            {
                dict1[s[i]-'a']++;
            }

            for (int i=0;i<t.size();i++)
            {
                dict2[t[i]-'a']++;
            }

            if (dict1==dict2)
            {
                return true;
            }

            else
            {
                return false;
            }
        }
    }
};
