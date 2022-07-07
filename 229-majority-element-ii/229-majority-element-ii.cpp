class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         unordered_map<int,int>count;
        int n=nums.size()/3;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
            if(count[nums[i]]>n && count[nums[i]]<n+2)ans.push_back(nums[i]);       
        }
        return ans;
    
        
    }
};