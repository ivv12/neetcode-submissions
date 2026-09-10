class Solution {
public:
    void backtrack(int ind, int n, vector<int>& nums, vector<int>& path, vector<vector<int>>& res)
    {
        if (ind==n)
        {
            res.push_back(path);
            return;
        }

        path.push_back(nums[ind]);
        backtrack(ind+1,n,nums,path,res);
        path.pop_back();
        backtrack(ind+1,n,nums,path,res);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int ind=0;
        vector<vector<int>> res;
        vector<int> path;
        backtrack(ind,nums.size(),nums,path,res);
        return res;
    }
};
