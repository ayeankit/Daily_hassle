class Solution {
public:
    bool isPalindrome(int x) {
        
      string s = to_string(x);
string srev = string(s.rbegin(),s.rend());
if(s == srev) return true;
else return false;
    
    
    
    }
};