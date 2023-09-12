class Solution {
public:
    int solve(string s1,string s2,int l1,int l2,vector<vector<int>>&dp){
        if(l1<0)return l2+1;
        if(l2<0)return l1+1;
        if(dp[l1][l2]!=-1)return dp[l1][l2];
        if(s1[l1]==s2[l2]){
            return dp[l1][l2]=0+solve(s1,s2,l1-1,l2-1,dp);
        }else{
            int insrt=1+solve(s1,s2,l1,l2-1,dp);
            int dle=1+solve(s1,s2,l1-1,l2,dp);
            int replac=1+solve(s1,s2,l1-1,l2-1,dp);
            return dp[l1][l2]=min(insrt,min(dle,replac));
        }
    }
    int minDistance(string word1, string word2) {
        int l1=word1.size();
        int l2=word2.size();
        vector<vector<int>>dp(l1,vector<int>(l2,-1));
        return solve(word1,word2,l1-1,l2-1,dp);
    }
};
