class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     vector<int>  res;

     unordered_map<int,int> maps;
     priority_queue<pair<int,int>> pq;

    for (int i=0;i<nums.size();i++)
    {
        maps[nums[i]]++;
    }


     for ( auto &it: maps)
     {
        pq.push({it.second,it.first});
     }   
     

     for (int i=0;i<k;i++)
     {
        res.push_back(pq.top().second);
        pq.pop();
     }
        
        return res;

    }


};
