class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> cnt;
        for (int i=0;i<nums.size();i++)
        {
            if (cnt[nums[i]]>0)
            {
                return true;
            }

            cnt[nums[i]]++;
        }

        return false;
    }
};