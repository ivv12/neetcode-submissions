class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        } 

        priority_queue<pair<int,int>> pq;

        for (auto &it : freq)
        {
            pq.push({it.second,it.first});
        }

        vector<int> res;

        while (k--)
        {
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;

    }
};
