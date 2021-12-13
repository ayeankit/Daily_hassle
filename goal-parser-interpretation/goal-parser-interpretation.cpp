class Solution {
public:
    string interpret(string command) {
        
     int n = command.size();
        string s;
        int i=0;
        while(i<n)
        {
            if(command[i]=='G')
            {
                s.push_back('G');
                i++;
                continue;
            }
        
            if(command[i]=='(')
            {
                if(command[i+1]==')')
                {
                    s.push_back('o');
                    i += 2;
                    continue;
                }
                else
                {
                    s.push_back('a');
                    s.push_back('l');
                    i += 4;
                    continue;
                }
            }
        }
        return s;
    }
};