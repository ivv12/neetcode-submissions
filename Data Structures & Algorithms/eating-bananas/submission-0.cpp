class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max_pl=piles[0];
        for (int i=0;i<piles.size();i++)
        {
            if (piles[i]>max_pl)
            {
                max_pl=piles[i];
            }
        }

        int ans=1;
        int hrs=0;
        int l=1;
        int r=max_pl;

        while (l<=r)
        {
            int mid= l+(r-l)/2;
            int hrs=0;
            for (int i=0;i<piles.size();i++)
            {
                hrs+=(piles[i]+mid-1)/mid;
            }


            if (hrs <= h) 
            {
                ans = mid;     
                r = mid - 1;    
            } 
            
            else 
            {
                l = mid + 1;   
            }

        }

        return l;
    }
};
