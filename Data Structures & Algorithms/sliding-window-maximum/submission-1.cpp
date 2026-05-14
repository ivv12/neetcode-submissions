class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l = 0;
        vector<int> res;

        for (int r = 0; r < nums.size(); r++) {
            // Once we reach window size k
            if (r - l + 1 == k) {
                // TWEAK: Re-calculate the max of the CURRENT window [l...r]
                int current_max = nums[l];
                for (int i = l; i <= r; i++) {
                    if (nums[i] > current_max) current_max = nums[i];
                }
                
                res.push_back(current_max);
                l++; // Slide the window
            }
        }
        
        return res;
    }
};