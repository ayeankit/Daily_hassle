class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
         int cnt = 0;
        int m = grid[0].size();
        int n = grid.size();
        int i=n-1; int j=0;
        while(i >= 0 && j < m) {
            if(grid[i][j] < 0) {
                i--;
                cnt += (m-j);//after all digit will negative since array is sorted in decreasing order
            } else {
                j++;
            }
        }
        return cnt;
    }
};

        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    

