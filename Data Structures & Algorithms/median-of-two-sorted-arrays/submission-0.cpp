class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) return findMedianSortedArrays(nums2, nums1);
        
        int m = nums1.size(), n = nums2.size();
        int low = 0, high = m;
        
        while (low <= high) {
            int px = low + (high - low) / 2;
            int py = (m + n + 1) / 2 - px;
            
            int maxLx = (px == 0) ? INT_MIN : nums1[px - 1];
            int minRx = (px == m) ? INT_MAX : nums1[px];
            
            int maxLy = (py == 0) ? INT_MIN : nums2[py - 1];
            int minRy = (py == n) ? INT_MAX : nums2[py];
            
            if (maxLx <= minRy && maxLy <= minRx) {
                if ((m + n) % 2 != 0) return std::max(maxLx, maxLy);
                return (std::max(maxLx, maxLy) + std::min(minRx, minRy)) / 2.0;
            } 
            else if (maxLx > minRy) high = px - 1;
            else low = px + 1;
        }
        return 0.0;
    }
};
