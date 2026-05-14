class Solution {
public:
    int findMin(vector<int> &nums) {

        int l=0;
        int r=nums.size()-1;

        int min_ele=nums[0];

        while (l<=r)
        {
            int mid=l+(r-l)/2;
            if (nums[mid]<min_ele)
            {
                min_ele=min(nums[mid],min_ele);
            }

            if (nums[mid]>nums[r])
            {
                l=mid+1;
            }

            else
            {
                r=mid-1;
            }

        }
        
        return min_ele;
    }
};
