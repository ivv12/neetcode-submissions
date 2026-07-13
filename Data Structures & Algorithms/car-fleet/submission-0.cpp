class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;

        for (int i = 0; i < position.size(); i++) 
        {
            cars.push_back({position[i], speed[i]});
        }

        sort(cars.begin(), cars.end());
    
   vector<double> dist(cars.size());

    for (int i = 0; i < cars.size(); i++) 
    {
        dist[i] = (double)(target - cars[i].first) / cars[i].second;
    }

    double last=0.0;
    int fleet=0;
    for (int i=cars.size()-1;i>=0;i--)
    {
        double curr=dist[i];
        if (curr>last)
        {            
            fleet++;
            last=curr;
        }

    }
    
    return fleet;
    }
};