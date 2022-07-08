class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
         //two pointer
        
        int l=0;
        int e=num.size()-1;
        
        while(l<e){
            
            if(num[l]+num[e]==target){
                return {l+1,e+1};
            }
            if(num[l]+num[e]>target){
                e--;
            }
            
            else{
                l++;
            }
            
        }
        return {};
        
    }
};
        
   