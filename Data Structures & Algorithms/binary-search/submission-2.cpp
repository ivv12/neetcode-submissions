class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;

        while (l<=r)
        {
            int val=l+(r-l)/2;
            if (nums[val]==target)
            {
                return val;
            }

            if (nums[val]<target)
            {
                l=val+1;
            }

            else
            {
                r=val-1;
            }
           
        }
        
        return -1;

    }
};
