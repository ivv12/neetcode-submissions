class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> cnt(n + 1, 0);

        for (int i = 0; i < n; i++) {
            cnt[nums[i]]++;
        }

        vector<int> miss;
        for (int i = 1; i <= n; i++) {
            if (cnt[i] == 0) {
                miss.push_back(i);
            }
        }

        return miss;
    }
};