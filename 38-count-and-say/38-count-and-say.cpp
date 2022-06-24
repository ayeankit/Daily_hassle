class Solution {
public:
    string countAndSay(int n) {
        
    {
       if(n==1)
       {
           return "1";
       }
        if(n==2)
        {
            return "11";
        }
        string s="11";
        int i;
        for(int j=3;j<=n;j++)
        {
            string t="";
            int count=1;
            for( i=0;i<s.length()-1;i++)
            {
                if(s[i]!=s[i+1])
                {
                    t=t+to_string(count);
                    t=t+s[i];
                    count=1;
                }
                else
                {
                    count++;
                }
            }
            t=t+to_string(count);
            t=t+s[i];
            s=t;
        }
        return s;
    }} 
};