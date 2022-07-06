class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if(nums.size()<=1)
        return nums;
   
    unordered_map<int,int> mapping;
    vector<int> ans;
    int max=nums.size()/3;
    for(int i=0;i<nums.size();i++)
    {
        mapping[nums[i]]++;           
    }
    for (auto itr = mapping.begin(); itr != mapping.end(); itr++)
    {
        if(itr->second>max)
            ans.push_back(itr->first);
    }
    return ans;
        
    }
};