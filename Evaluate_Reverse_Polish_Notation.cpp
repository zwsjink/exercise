class Solution {
public:
    int evalRPN(vector<string> &tokens) {
        stack<int> memory;
        int        i;
        int        op1, op2, result;
        for (i = 0;i<tokens.size();i++){
            if (((tokens[i][0] == '+') || (tokens[i][0] == '-') || (tokens[i][0] == '*') || (tokens[i][0] == '/')) && (tokens[i].length()==1)){
                op2 = memory.top();
                memory.pop();
                op1 = memory.top();
                memory.pop();
                switch(tokens[i][0]){
                    case '+':
                        result = op1 + op2;
                        break;
                    case '-':
                        result = op1 - op2;
                        break;
                    case '*':
                        result = op1 * op2;
                        break;
                    case '/':
                        result = op1 / op2;
                        break;
                    default:
                        break;
                }
                memory.push(result);   
            }
            else
                memory.push(stoi(tokens[i], nullptr, 10));
        }
        return memory.top();
    }
};