class Solution {
public:
    void reverseWords(string &s) {
        int N = s.length();
        if (N==0) return;
        
        stack<char> word;
        int i;
        i = N-1;
        while(i>=0){
            if (s[i]==' ')
                i--;
            else
                break;
        }
        
        if (i<0){
            s = "";
            return;
        }
        string t;
        while(i>=0){
            while(s[i]!=' '&&i>=0){
                if (word.empty())
                    word.push(' ');
                word.push(s[i]);
                i--;
            }
            
            while(!word.empty()){
                t=t+word.top();
                word.pop();
            }
            i--;
        }
        s = t;
        s.erase(s.length()-1, 1);
        return;
    }
};
