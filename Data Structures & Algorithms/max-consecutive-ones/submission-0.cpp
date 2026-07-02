class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_o=0;
        int o=0;

        for (int i=0;i<nums.size();i++)
        {
            if (nums[i]==1)
            {
                o++;
            }

            else
            {
                if (o>max_o)
                {
                    max_o=o;
                }
                o=0;
            
            }

            
        }

        if (o > max_o) 
        {
            max_o = o;
        }
        return max_o;
    }
};