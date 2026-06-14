class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq1(128,0);
        vector<int> freq2(128,0);
        
        int l=0;
        int curr=0;

        for (int i=0;i<s1.size();i++)
        {
            freq1[s1[i]]++;
        }

        for (int r=0;r<s2.size();r++)
        {
            freq2[s2[r]]++;
            if ((r-l+1)>s1.size())
            {
                freq2[s2[l]]--;
                l++;
            }

            if ((r-l+1)==s1.size() && freq1==freq2)
            {
                return true;
            }

        }

        return false;        

    }
};
