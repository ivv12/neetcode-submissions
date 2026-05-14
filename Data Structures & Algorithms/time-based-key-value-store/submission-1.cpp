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
       
        auto& vec = hashm[key];
        int l = 0;
        int r = vec.size() - 1;
        string res = "";

        while (l<=r)
        {
            int mid = l + (r - l) / 2;

            if (vec[mid].first <= timestamp) 
            {
                res = vec[mid].second;
                l = mid + 1;
            } 
            
            else 
            {
                r = mid - 1;
            }
        }

        return res;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */