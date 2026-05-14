class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int l=0;
        int r=nums.size()-1;

        sort(nums.begin(),nums.end());

        for (int i=0;i<nums.size()-2;i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) 
            {
                continue;
            }

        l=i+1;
            r=nums.size()-1;
        while (l < r)
        {
            
            int target_sum=-nums[i];
            int curr_sum=nums[l]+nums[r];
            
            if (target_sum==curr_sum)
            {
                res.push_back({nums[i], nums[l], nums[r]});
                while (l < r && nums[l] == nums[l + 1]) 
                {
                    l++;
                }

                while (l < r && nums[r] == nums[r - 1]) 
                {
                    r--;
                }
                l++;
                r--;
            }

            else if (target_sum<curr_sum)
            {
                r--;
            }

            else
            {
                l++;
            }

        }
        }
        return res;
    }
};
