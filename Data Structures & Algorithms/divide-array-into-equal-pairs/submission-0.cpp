class Solution {
public:
    bool divideArray(vector<int>& nums) {
     unordered_map<int, int> countMap;
        
        for (int num : nums) {
            countMap[num]++;
        }
        
        for (const auto& pair : countMap) {
            if (pair.second % 2 != 0) {
                return false;
            }
        }
        
        return true;   
    }
};