class CountSquares {
    unordered_map<int, unordered_map<int, int>> m;
    vector<pair<int, int>> pts;

public:
    CountSquares() {}
    
    void add(vector<int> p) {

        int x = p[0];
        int y = p[1];
        m[x][y]++;
        pts.push_back({x, y});
    }
    
    int count(vector<int> p) {
        int px = p[0];
        int py = p[1];
        int ans = 0;
        for (auto& [x, y] : pts) 
        {
            if (abs(px - x) != abs(py - y) || px == x) 
            {
                continue;
            }

            if (m[px].count(y) && m[x].count(py)) 
            {
                ans += m[px][y] * m[x][py];
            }
        }
        return ans;
    }
};