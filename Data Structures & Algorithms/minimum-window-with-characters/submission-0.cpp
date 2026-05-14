class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> freq1(128,0);
        vector<int> freq2(128,0);

        int lens=s.size();
        int lent=t.size();

        int min_l=0;
        int min_r=0;
        int min_len = INT_MAX;
        int cnt=0;
        int start=0;


        string res="";
        if (lens<lent)
        {
            return "";
        }
            for (int i=0;i<lent;i++)
            {
                freq1[t[i]]++;
            }

        int minstr=0;

        int l=0;
        for (int r=0;r<lens;r++)
        {
            char c = s[r];
            freq2[c]++;

            if (freq1[c] > 0 && freq2[c] <= freq1[c]) 
            {
                cnt++;
            }

            while (cnt==lent)
            {
                if (r - l + 1 < min_len) 
                {
                    min_len = r - l + 1;
                    min_l = l;
                }
                
                if (freq1[s[l]]>0 && freq1[s[l]]==freq2[s[l]])
                {
                    cnt--;
                }

                freq2[s[l]]--;
                l++;

            }


        }
        
        if (min_len == INT_MAX) 
        {
            return "";
        }

        for (int j=min_l;j<min_l + min_len;j++)
        {
            res = res + s[j];
        }
        return res;
    }
};
