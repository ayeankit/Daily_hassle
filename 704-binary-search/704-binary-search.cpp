class Solution {
public:
    int search(vector<int>& a, int t) {
        
        
       
        int i = 0, j = a.size()-1;
        int mid = 0;
        while(i <= j) {
            mid = i + (j-i)/2;
            if(t ==  a[mid]) return mid;
            else if(a[mid] > t) j = mid-1;
            else i = mid+1;
        }
        return -1;
    }
};
            
            
            
        
        
        
        
        
