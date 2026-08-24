class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;

        for (string& s : tokens) {

            // Number
            if (s != "+" && s != "-" && s != "*" && s != "/") {
                stk.push(stoi(s));
            }

            // Operator
            else {
                int b = stk.top();
                stk.pop();

                int a = stk.top();
                stk.pop();

                if (s == "+") {
                    stk.push(a + b);
                }
                else if (s == "-") {
                    stk.push(a - b);
                }
                else if (s == "*") {
                    stk.push(a * b);
                }
                else if (s == "/") {
                    stk.push(a / b);
                }
            }
        }

        return stk.top();
    }
};