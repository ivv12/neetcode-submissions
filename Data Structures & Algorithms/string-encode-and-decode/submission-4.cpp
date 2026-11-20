class Solution {
public:

    string encode(vector<string>& strs) {
       string encoded="";
    
       for (int i=0;i<strs.size();i++)
       {
        encoded+=to_string(strs[i].size());
        encoded+="#";
        encoded+=strs[i];        
       }

       return encoded;

    }

    vector<string> decode(string s) {
       vector<string> decoded;
       string curr="";
       int rem=0;
       string leng="";
       for (int i=0;i<s.size();i++)
       {
            if (rem>0)
            {
                curr+=s[i];
                rem--;
                if (rem==0)
                {
                    decoded.push_back(curr);
                    curr="";
                }
            }

            else if (s[i]=='#')
            {
                rem=stoi(leng);
                leng="";
                if (rem==0)
                {
                    decoded.push_back("");
                }
            }

            else
            {
                leng+=s[i];
            }
       }

       return decoded;
        
    
    }
};
