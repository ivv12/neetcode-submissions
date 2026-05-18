class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> list;
        for (int i=0;i<strs.size();i++)
        {
            string val=strs[i];
            string copy=val;
            sort(val.begin(),val.end());
            list[val].push_back(copy);
        }

        for (auto& pair : list) 
        {
            res.push_back(pair.second);
        }

        return res;
        
    }
};
