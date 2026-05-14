class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int min=prices[0];
        int max_prof=0;

        for (int i=0;i<prices.size();i++)
        {
            if (prices[i]<min)
            {
                min=prices[i];
            }

            int prof=prices[i]-min;
            if (prof>max_prof)
            {
                max_prof=prof;
            }
        }
        
        return max_prof;
    }
};
