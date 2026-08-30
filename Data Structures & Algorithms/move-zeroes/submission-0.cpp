class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int l=0;
     int r=nums.size()-1;
     for (int i=0;i<nums.size();i++)
     {
        if (nums[i]==0)
        {
            continue;
        }

        nums[l]=nums[i];
        l++;
     }  

     for (int i=l;i<nums.size();i++)
     {
        nums[i]=0;
     }
    }
};