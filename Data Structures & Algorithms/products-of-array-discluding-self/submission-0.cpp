class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n, 1);
        int leftproduct=1;
        for (int i=0;i<nums.size();i++)
        {
            res[i]=leftproduct;
            leftproduct*=nums[i];
        }

        int rightproduct=1;
        for (int i=nums.size()-1;i>=0;i--)
        {
            res[i]*=rightproduct;
            rightproduct*=nums[i];
        }

        return res;

    }
};
