class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
        {
            return "";
        }

        else
        {
            sort(strs.begin(),strs.end());
            string s1=strs.front();
            string s2=strs.back();
            string res="";
            for (int i=0;i<s1.size();i++)
            {
                if (s1[i]==s2[i])
                {
                    res+=s1[i];
                }

                else
                {
                    break;
                }
            }

            return res;
        }
    }
};