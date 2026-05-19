class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int lprod=1;
        int rprod=1;

        vector<int> lefts(nums.size());
        vector<int> rights(nums.size());

        for (int i=0;i<nums.size();i++)
        {
            lefts[i]=lprod;
            lprod*=nums[i];
        }

        for (int i=nums.size()-1;i>=0;i--)
        {
            rights[i]=rprod;
            rprod*=nums[i];
        }

        vector<int> res(nums.size());
        for (int i=0;i<nums.size();i++)
        {
            res[i]=lefts[i]*rights[i];
        }

        return res;


    }
};
