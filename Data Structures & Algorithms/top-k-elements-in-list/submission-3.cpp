class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> mp;
    for (int i=0;i<nums.size();i++)
    {
        mp[nums[i]]++;
    }

    vector<pair<int, int>> freq;
    for (const auto& [val, count] : mp)
    {
        freq.push_back({count, val});
    }

    vector<int> res(k);
    sort(freq.rbegin(),freq.rend());
    for (int i=0;i<k;i++)
    {
        res[i]=(freq[i].second);
    }
    return res;

    }


};
