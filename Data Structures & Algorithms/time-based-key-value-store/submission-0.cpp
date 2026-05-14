class TimeMap {
private:
    unordered_map<string, vector<pair<int, string>>> hashm;
public:
    TimeMap() 
    {  }
    
    void set(string key, string value, int timestamp) 
    {
        hashm[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        string closest="";
        int cls=-1;
        for (auto it:hashm[key])
        {
            if (it.first==timestamp)
            {
                return it.second;
            }

            else
            {
                if (it.first < timestamp && cls < it.first)
                {
                    cls=it.first;
                    closest=it.second;
                }
            }
        }
        return closest;
    }
};