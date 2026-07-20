class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int i=0;i<asteroids.size();i++)
        {
            bool crash=false;

            while (!st.empty() && st.top()>0 && asteroids[i]<0)
            {
                if (st.top()<abs(asteroids[i]))
                {
                    st.pop();
                    continue;
                }

                else if (st.top()==abs(asteroids[i]))
                {
                    st.pop();
                }

                crash=true;
                break;
                
            }

            if (crash==false)
            {
                st.push(asteroids[i]);
            }
        }

vector<int> res(st.size());
        for (int i = st.size() - 1; i >= 0; i--) {
            res[i] = st.top();
            st.pop();
        }

        return res;
    }
};