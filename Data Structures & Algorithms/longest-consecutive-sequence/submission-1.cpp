class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> vals;
        int lngst=0;
        int curr=0;

        for (int i=0;i<nums.size();i++)
        {
            vals.insert(nums[i]);
        }

        for (int x:vals)
        {
            curr=0;
            int cop=x;
            if (vals.find(x-1)!=vals.end())
            {
                continue;
            }

            else
            {
                while (vals.find(cop)!=vals.end())
                {
                    curr++;
                    if (curr>lngst)
                    {
                        lngst=curr;
                    }
                    cop++;
                }
            }
        }

        return lngst;
    }
};
