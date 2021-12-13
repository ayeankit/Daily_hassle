class Solution {
public:
    int balancedStringSplit(string s) {
        
    {
        int l=0,r=0,bal=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='R')
                r++;
            if(s[i]=='L')
                l++;
            if(l==r)
            {   bal++;
                l=0;
                r=0;
            }
        }
        return bal;
    }}
};