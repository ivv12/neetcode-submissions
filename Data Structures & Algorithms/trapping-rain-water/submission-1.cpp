class Solution {
public:
    int trap(vector<int>& height) {

        int l=0;
        int r=height.size()-1;
        int leftMax = height[l];
        int rightMax = height[r];
        int area=0;

        while (l<r)
        {

            
            if (leftMax<rightMax)
            {
                area+=(leftMax-height[l])*1;
                l++;
                leftMax = max(leftMax, height[l]);
            }

            else
            {   
                area+=(rightMax-height[r])*1;
                r--;
                rightMax = max(rightMax, height[r]);
            }


        }

        return area;
        
    }
};
