class Solution {
public:
    int hammingWeight(uint32_t n) {
       
        string s = bitset<32>(n).to_string();
        int cnt1s=0;
        for (int i=0;i<s.size();i++)
        {
            if (s[i]=='1')
            {
                cnt1s++;
            }
        }

        return cnt1s;
    
    }
};
