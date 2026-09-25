class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;

        for (string word : words) {
            bool valid = true;

            for (char c : word) {
                if (allowed.find(c) == string::npos) {
                    valid = false;
                    break;
                }
            }

            if (valid)
                count++;
        }

        return count;
    }
};