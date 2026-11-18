class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> list;
    
        for (int i=0;i<strs.size();i++)
        {
            string curr=strs[i];
            string dup=strs[i];
            sort(curr.begin(),curr.end());

            list[curr].push_back(dup);
        }

        for (auto & pair:list)
        {
            res.push_back(pair.second);
        }

        return res;
    }
};
