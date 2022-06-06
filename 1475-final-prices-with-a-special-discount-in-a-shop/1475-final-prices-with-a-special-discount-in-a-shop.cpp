class Solution {
public:
    vector<int> finalPrices(vector<int>& p) {
        
     vector<int> res;
        stack<int> s;
        int n=p.size();
        s.push(p[n-1]);
        res.push_back(p[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            while(!s.empty()&&s.top()>p[i])
                s.pop();
            int ans = (s.empty())? p[i]:p[i]-s.top();
            res.push_back(ans);
            s.push(p[i]);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};