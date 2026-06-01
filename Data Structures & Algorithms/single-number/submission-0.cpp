class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int par=0;

        for (int i=0;i<nums.size();i++)
        {
            par^=nums[i];
        }

        return par;
        
    }
};
