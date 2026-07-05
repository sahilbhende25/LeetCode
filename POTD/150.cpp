class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(auto&token : tokens) {
            if(token == "+") {
                int first = s.top(); s.pop();
                int second = s.top(); s.pop();
                s.push(second + first);
            }
            else if(token == "-") {
                int first = s.top(); s.pop();
                int second = s.top(); s.pop();
                s.push(second - first);
            }
            else if(token == "*") {
                int first = s.top(); s.pop();
                int second = s.top(); s.pop();
                s.push(second * first);
            }
            else if(token == "/") {
                int first = s.top(); s.pop();
                int second = s.top(); s.pop();
                s.push(second / first);
            }
            else {
                if(token[0] == '-') {
                    int num = 0;
                    for(int i = 1 ; i < token.length() ; i++) {
                        num = num*10 + (token[i] - '0');
                    }
                    s.push(num*-1);
                }
                else {
                    int num = 0;
                    for(auto&digit : token) {
                        num = num*10 + (digit - '0');
                    }
                    s.push(num);
                }
            }
        }
        return s.top();
    }
};