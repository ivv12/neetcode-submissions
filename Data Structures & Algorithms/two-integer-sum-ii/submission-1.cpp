class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> seen;
        vector<int> res(2);
        for (int i=0;i<numbers.size();i++)
        {
            int comple=target-numbers[i];
            if (seen.find(comple)!=seen.end())
            {
                res[0]=seen[comple]+1;
                res[1]=i+1;
                break;
            }

            seen[numbers[i]]=i;

        }

        return res;

    }
};
