class MinStack {
private:
    stack<int> st;
    stack<int> minn;
public:
    MinStack() {
        
        
    }
    
    void push(int val) {
        st.push(val);
        if (minn.empty() || val <= minn.top()) 
        {
            minn.push(val);
        }

        else
        {
            minn.push(minn.top());
        }
    }
    
    void pop() {
        minn.pop();
        st.pop();
        
    }
    
    int top() {
        
        return st.top();
    }
    
    int getMin() {
        return minn.top();
    }
};
