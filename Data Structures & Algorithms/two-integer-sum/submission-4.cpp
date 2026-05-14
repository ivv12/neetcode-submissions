class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen;
        vector<int> res(2);
        for (int i=0;i<nums.size();i++)
        {
            int comple=target-nums[i];
            if (seen.find(comple)!=seen.end())
            {
                res[0]=seen[comple];
                res[1]=i;
            }

            seen[nums[i]]=i;

        }

        return res;
    }
};
