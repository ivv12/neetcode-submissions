class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> freq1(128,0);
        vector<int> freq2(128,0);

        for (int i=0;i<t.size();i++)
        {
            freq1[t[i]]++;
        }

        int minstr=0;

        if (s.size()<t.size())
        {
            return "";
        }

        int curr=0;
        int minn=INT_MAX;
        int l=0;
        int minl=0;
        int minr=0;
        for (int r=0;r<s.size();r++)
        {
            freq2[s[r]]++;

            if (freq1[s[r]]>0 && freq2[s[r]]<=freq1[s[r]])
            {
                curr++;
            }

            while (curr==t.size())
            {
                if (r-l+1<minn)
                {minn=r-l+1;
                minl=l;
                minr=r;}
            
                if (freq1[s[l]]>0 && freq1[s[l]]==freq2[s[l]])
                {
                    curr--;
                }

                freq2[s[l]]--;
                l++;
                
            }

        }

        if (minn == INT_MAX) 
        {
            return "";
        }

        string res="";

        for (int j=minl;j<minl + minn;j++)
        {
            res = res + s[j];
        }
        return res;

    }
};
