class Solution {
public:
    void backtrack(int op, int cl, int n, string& curr,vector<string>& res)
    {
        if (curr.size()==2*n)
        {
            res.push_back(curr);
            return;
        }

        if (op<n)
        {
            curr.push_back('(');
            backtrack(op+1,cl,n,curr,res);
            curr.pop_back();
        }

        if (op>cl)
        {
            curr.push_back(')');
            backtrack(op,cl+1,n,curr,res);
            curr.pop_back();
        }

    }

    vector<string> generateParenthesis(int n) {
        int op=0;
        int cl=0;
        vector<string> res;
        string curr="";
        backtrack(op,cl,n,curr,res);
        return res;
    }
};
