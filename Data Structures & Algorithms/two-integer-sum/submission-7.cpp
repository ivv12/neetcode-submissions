class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> res(2);
       unordered_map<int,int> ind;
       for (int i=0;i<nums.size();i++)
       {
        int ch=target-nums[i];
        if (ind.find(ch) != ind.end())
        {
            res[1]=i;
            res[0]=ind[ch];
            return res;
        }
        ind[nums[i]]=i;
       }
       return res;
    }
};
