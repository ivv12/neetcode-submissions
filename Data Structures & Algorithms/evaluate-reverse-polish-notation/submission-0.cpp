class Solution {
public:
    int evalRPN(vector<string>& tokens) {
     stack<int> st;

     for (int i=0;i<tokens.size();i++)
     {
        if (tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/")
        { int val2=st.top();
            st.pop();
            int val1=st.top();
            st.pop();
            int val3=0;
            if (tokens[i]=="+")
            {
                val3=val1+val2;
            }
            else if (tokens[i]=="-")
            {
                val3=val1-val2;   
            }
            else if (tokens[i]=="*")
            {
                val3=val1*val2;
            }
            else if (tokens[i]=="/")
            {
                val3=val1/val2;
            }

            st.push(val3);
        }

        else
        {
              st.push(stoi(tokens[i]));
        }

     }   

    int res=st.top();
    return res;

    }
};
