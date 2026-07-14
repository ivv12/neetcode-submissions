class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int curr=0;
        int maxx=0;
        int width=0;
        int height=0;
        int l=0;
        int r=0;
        unordered_set<int,int> ind;
        for (int i=0;i<heights.size();i++)
        {
            width=0;
            while (!st.empty() && heights[st.top()]>heights[i])
            {
                height=heights[st.top()];
                st.pop();
                if (st.empty())
                    {l = -1;}
                else
                    {l = st.top();}
                r=i;
                width=r-l-1;
                curr=(width*height);
                maxx=max(curr,maxx);
            }
            
            st.push(i);
        }

        while (!st.empty()) 
        {
            height=heights[st.top()];
                st.pop();
                if (st.empty())
                    {l = -1;}
                else
                    {l = st.top();}
                r=heights.size();
                width=r-l-1;
                curr=(width*height);
                maxx=max(curr,maxx);
        }

        return maxx;

    }
};
