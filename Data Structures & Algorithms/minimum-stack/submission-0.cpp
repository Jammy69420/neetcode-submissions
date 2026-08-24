class MinStack {
private:
    vector<vector<int>> st;
public:

    MinStack() {

    }
    
    void push(int val) {
        int minValue = getMin();

        if (st.empty() || minValue > val) minValue = val;

        st.push_back({val, minValue});
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        return st.empty() ? -1 : st.back()[0];
    }
    
    int getMin() {
        return st.empty() ? 1 : st.back()[1];
    }
};
