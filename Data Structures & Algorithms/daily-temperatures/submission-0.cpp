class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> stk; //temperature - index
        vector<int> res(temperatures.size(), 0);

        for (int i = 0; i < temperatures.size(); i++) {
            while (!stk.empty() && temperatures[i] > stk.top().first) {
                pair<int,int> top_temp = stk.top();
                stk.pop();
                res[top_temp.second] = i - top_temp.second; 
            }
            stk.push({temperatures[i], i});
        }
        return res;
    };
};