class Solution {
public:
   
        
  string countAndSay(int n) {
    if(n==1) return "1";
    if(n==2) return "11";
    string s = countAndSay(n-1);   
    string res = "";
    int count = 0;
      for(int i=0;i<s.length();i++){
        count++;
          if(i==s.length()-1 || s[i]!=s[i+1] ){
              res =res+ to_string(count) +s[i];
              count = 0;
          }
        }   
        return res;
    }
};