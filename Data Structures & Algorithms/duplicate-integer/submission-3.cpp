class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> mapp;
        for (int i=0;i<nums.size();i++)
        {
            if (mapp[nums[i]]!=0)
            {
                return true;
            }

            mapp[nums[i]]++;
        }

        return false;
    }
};