class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
      unordered_set<string> s;

        for (const string& e : emails) {
            string cur = "";
            int i = 0;

            while (e[i] != '@' && e[i] != '+') {
                if (e[i] != '.') cur += e[i];
                i++;
            }

            while (e[i] != '@') i++;

            cur += e.substr(i);
            s.insert(cur);
        }

        return s.size();  
    }
};