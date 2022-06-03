class Solution {
public:
    bool isValid(string s) {
        
        if(s.size()%2!=0) return false;
        stack<char> s1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{') s1.push(s[i]);
            else if(s1.empty()) return false;
            else{
                if(s1.top()=='('){
                    if(s[i]!=')') return false;
                    s1.pop();
                }
                else if(s1.top()=='['){
                    if(s[i]!=']') return false;
                    s1.pop();
                }
                else{
                    if(s[i]!='}') return false;
                    s1.pop();
                }
            }
        }
        return s1.empty() ? true:false;
    }
        
    };
