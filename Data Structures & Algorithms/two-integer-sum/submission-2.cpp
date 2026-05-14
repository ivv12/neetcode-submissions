class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> index_map;
        vector<int> res(2);

        for (int i=0;i<nums.size();i++)
        {
            int val= nums[i];
            int complement=target - nums[i];

            if (index_map.count(complement))
            {
                res[0]=index_map[complement];
                res[1]=i;
            }

            index_map[val]=i;
        }
        return res;
    }
};
