class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> counts;
        for (int num : arr) {
            counts[num]++;
        }
        
        int largest_lucky = -1;
        for (auto& [num, freq] : counts) {
            if (num == freq) {
                largest_lucky = max(largest_lucky, num);
            }
        }
        
        return largest_lucky;
    }
};