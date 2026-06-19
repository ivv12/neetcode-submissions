class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2);
        unordered_map<int,int> seen;
        for (int i=0;i<nums.size();i++)
        {
            int rest=target-nums[i];
            if (seen.find(rest)!=seen.end())
            {
                res[0]=seen[rest];
                res[1]=i;
                break;
            }

            seen[nums[i]]=i;
        }

        return res;
    }
};
