class Solution {
public:
    void solve(int i,vector<int>& nums, vector<int>& path, vector<vector<int>>& ans)
    {
        if (i == nums.size())
    {
        ans.push_back(path);
        return;
    }

    path.push_back(nums[i]);
    solve(i + 1, nums, path, ans);
    path.pop_back();

    int j = i + 1;
    while (j < nums.size() && nums[j] == nums[i])
        j++;

    solve(j, nums, path, ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int ind=0;
        int n=nums.size();
        vector<int> path;
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        solve(ind,nums,path,res);
        return res;
    }
};