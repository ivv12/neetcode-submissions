class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int par=0;
        for (int i=0;i<nums.size();i++)
        {
            par^=i;
            par^=nums[i];
            
        }

        par^=nums.size();

        return par;
    }
};
