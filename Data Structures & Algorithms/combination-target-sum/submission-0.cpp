class Solution {
public:
    void cmbsum(int ind, int n, vector<int>& candidates, int target,int summ, vector<vector<int>>& res,vector<int>& path) 
    {
        if (summ==target)
        {
            res.push_back(path);
            return;
        }

        if (summ>target || ind==n)
        {
            return;
        }

        path.push_back(candidates[ind]);
        cmbsum(ind, n, candidates,target, summ+candidates[ind],res,path);
        path.pop_back();
        cmbsum(ind+1, n, candidates,target, summ,res,path);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        int ind=0;
        int summ=0;
        vector<vector<int>> res;
        vector<int> path;
        cmbsum(ind, n, candidates,target,summ,res,path);
        return res;
    }
};