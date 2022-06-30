class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& a) {
        
    
    long m=mass;
        sort(a.begin(), a.end());
        
        for(int i=0;i<a.size();i++){
            if((m-a[i])<0){
                return false;
            }
            m+=a[i];
        }
        return true;
    
    }
};