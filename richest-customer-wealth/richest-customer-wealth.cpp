class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {   int maxi = INT_MIN;
        for(int index=0;index<accounts.size();index++){
            int sum=0;
            for(int jindex=0;jindex<accounts[0].size();jindex++)
            {
                sum=sum + accounts[index][jindex];
            }
            if(maxi<sum)
            {
                maxi=sum;
            }
        }
        return maxi;
        
    }
};
        

