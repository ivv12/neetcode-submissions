class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        for (int l = 0; l + k <= nums.size(); l++) 
        {
            int mx = INT_MIN;
            for (int i = l; i < l + k; i++)
            {
                mx = max(mx, nums[i]);
            }
            ans.push_back(mx);
        }

        return ans;
    }
};
