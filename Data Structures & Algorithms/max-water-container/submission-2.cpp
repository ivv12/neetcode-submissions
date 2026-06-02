class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r=heights.size()-1;

        int maxx=0;
        int curr=0;

        while (l<r)
        {
            curr=min(heights[l],heights[r])*(r-l);

            if (curr>maxx)
            {
                maxx=curr;
            }

            if (heights[l]<heights[r])
            {
                l++;
            }

            else 
            {
                r--;
            }
        }

        return maxx;

    }
};
