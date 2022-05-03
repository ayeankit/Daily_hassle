class Solution {
public:
    string sortSentence(string s) {
        
        string tmp = "";
        stringstream ss(s);
        vector<string>ans;

        while(getline(ss, tmp, ' '))
        {
            ans.push_back(tmp);
        }
        
        string res = "";
        
        map<int, string>m;
        
        for(int i=0; i<ans.size(); i++)
        {
            for(int j=0 ;j<ans[i].size(); j++)
            {
              m[(ans[i][ans[i].size()-1])] =  ans[i].substr(0,ans[i].size()-1);
            }
        }
        
        for(auto x : m)
        {
            res +=x.second + " ";
        }
        
        res.pop_back();
        return res;
    }
};