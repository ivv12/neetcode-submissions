class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
    
        sort(nums.begin(), nums.end());
        for (int i=0;i<nums.size();i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) 
            {
                continue;
            }

            else
            {
                int l=i+1;
                int r=n-1;

                while (l<r)
                {
                    int curr=nums[i]+nums[l]+nums[r];

                    if (curr==0)
                    {
                        result.push_back({nums[i], nums[l], nums[r]});

                        while (l<r && nums[l]==nums[l+1])
                        {
                            l++;
                        }

                        while (l<r && nums[r]==nums[r-1])
                        {
                            r--;
                        }

                        l++;
                        r--;
                    }

                    else if (curr<0)
                    {
                        l++;
                    }

                    else if (curr>0)
                    {
                        r--;
                    }
                } 
            }

        }
    
        return result;

    }
};
