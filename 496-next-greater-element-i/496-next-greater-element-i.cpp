class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
         int n = nums1.size();
        
        unordered_map<int,int> um;
        
        vector<int> ans(n);
        
        for(int i=0;i<n;i++)
        {
            um[nums1[i]] = i;
        }
        
        stack<int> s;
        
        for(int i=nums2.size()-1;i>=0;i--)
        {
            while(!s.empty() && nums2[i]>s.top())
            {
                s.pop();
            }
            
            if(um.find(nums2[i])!=um.end())
            {
                if(!s.empty())
                {
                    ans[um[nums2[i]]] = s.top();
                }else{
                    ans[um[nums2[i]]] = -1;
                }
            }
            
            s.push(nums2[i]);
        }
        
        return ans;
    }
};