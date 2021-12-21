class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        
     sort(nums.begin(), nums.end());
        
        
        vector<int> n;
        int count=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                count++;
                n.push_back(i);
            }
            
        }
        return n;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    }};
        
       