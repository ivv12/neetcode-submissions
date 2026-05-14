class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> list;
        vector<vector<string>> result;

        for (int i = 0; i < strs.size(); i++) 
        {
            string val = strs[i];
            string key = val; 
            sort(key.begin(), key.end()); 
            list[key].push_back(val); 
        }
       
        for (auto& pair : list) 
        {
            result.push_back(pair.second);
        }

        return result;
        
    }
};
