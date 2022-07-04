class Solution {
public:
    int romanToInt(string s) {
        
        //first taking IV,IX,XL,XD, XL-40, XC-90, CD-400, CM-900
        
        
  int last_read = 0;
        int ans = 0;
        for(int i = 0;i < s.length()-1;i++){
            if(s[i] == 'I' && s[i+1] == 'V'){
                if(i == s.length()-2){
                    last_read = 1;
                }
                ans += 4;
                i++;
            }
            else if(s[i] == 'I' && s[i+1] == 'X'){
                if(i == s.length()-2){
                    last_read = 1;
                }
                ans += 9;
                i++;
            }
            else if(s[i] == 'X' && s[i+1] == 'L'){
                if(i == s.length()-2){
                    last_read = 1;
                }
                ans += 40;
                i++;
            }
            else if(s[i] == 'X' && s[i+1] == 'C'){
                if(i == s.length()-2){
                    last_read = 1;
                }
                ans += 90;
                i++;
            }
            else if(s[i] == 'C' && s[i+1] == 'D'){
                if(i == s.length()-2){
                    last_read = 1;
                }
                ans += 400;
                i++;
            }
            else if(s[i] == 'C' && s[i+1] == 'M'){
                if(i == s.length()-2){
                    last_read = 1;
                }
                ans += 900;
                i++;
            }
            else{
                if(s[i] == 'I'){
                    ans += 1;
                }
                else if(s[i] == 'V'){
                    ans += 5;
                }
                else if(s[i] == 'X'){
                    ans += 10;
                }
                else if(s[i] == 'L'){
                    ans += 50;
                }
                else if(s[i] == 'C'){
                    ans += 100;
                }
                else if(s[i] == 'D'){
                    ans += 500;
                }
                else if(s[i] == 'M'){
                    ans += 1000;
                }
            }
        }
        if(last_read == 0){
            int i = s.length()-1;
            if(s[i] == 'I'){
                    ans += 1;
                }
                else if(s[i] == 'V'){
                    ans += 5;
                }
                else if(s[i] == 'X'){
                    ans += 10;
                }
                else if(s[i] == 'L'){
                    ans += 50;
                }
                else if(s[i] == 'C'){
                    ans += 100;
                }
                else if(s[i] == 'D'){
                    ans += 500;
                }
                else if(s[i] == 'M'){
                    ans += 1000;
                }
        }
        return ans;
    }
};