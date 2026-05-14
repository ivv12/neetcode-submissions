class Solution {
public:
    bool isPalindrome(string s) {
        string new_s;

        for (char c : s)
        {
        if (isalnum((unsigned char)c)) 
        {
            new_s.push_back(tolower((unsigned char)c));
        }
    }

        int l=0;
        int r=new_s.size()-1;

        while (l<r)
        {
            if (new_s[l]!=new_s[r])
            {
                return false;
            }
            l++;
            r--;
        }

        return true;
        
    }
};
