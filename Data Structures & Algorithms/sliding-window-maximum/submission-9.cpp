class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l=0;
        vector<int> res;
        int max_val=INT_MIN;

        for (int r=0;r<nums.size();r++)
        {
            if (r-l+1==k)
            {
                int current_max = nums[l];
                for (int i = l; i <= r; i++) 
                {
                        current_max = max( current_max,nums[i]);
                    
                }
                
                res.push_back(current_max);
                l++;
            }   
            
        }
        
        return res;
    }
};
