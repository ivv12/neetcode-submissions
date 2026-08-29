class Solution {
public:
    void build(int ind,int n,string& digits, vector<string>& res, string& path, vector<string>& map)
    {
        if (ind==n)
        {
            res.push_back(path);
            return;
        }

        string poss=map[digits[ind]-'0'];

        for (char c: poss)
        {
            path.push_back(c);
            build(ind+1,n,digits,res,path,map);
            path.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> map={ "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv","wxyz"};
        if (digits.empty())
        {
            return {};
        }
        vector<string> res;
        int ind=0;
        int n=digits.size();
        string path="";
        build(ind,n,digits,res,path,map);
        return res;
    }
};