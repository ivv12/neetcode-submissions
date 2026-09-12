class Solution {
public:
    void cmbsum2(int ind, int n, vector<int>& candidates,int summ, int target, vector<int>& path,vector<vector<int>>& res)
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
        cmbsum2(ind+1,n,candidates,summ+candidates[ind],target,path,res);
        path.pop_back();
        
        while (ind+1 < n && candidates[ind+1] == candidates[ind]) 
        {
            ind++;
        }

        cmbsum2(ind+1,n,candidates,summ,target,path,res);
        
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        int summ=0;
        int ind=0;
        int n=candidates.size();
        vector<int> path;
        vector<vector<int>> res;
        cmbsum2(ind,n,candidates,summ,target,path,res);
        return res;
    }
};