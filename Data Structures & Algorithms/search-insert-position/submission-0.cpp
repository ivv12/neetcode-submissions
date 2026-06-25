class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;

        int val=0;
        while (l<=r)
        {
            int mid=l+(r-l)/2;
            if (nums[mid]==target)
            {
                return mid;
            }

            else if (nums[mid]<target)
            {
                l=mid+1;
                val=mid+1;
            }

            else
            {
                r=mid-1;
                val=mid-1;
            }
        }

        if (val==-1)
        {
            val=0;
        }

        return l;
    }
};