class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
    vector <int> merged;
int n = nums1.size();
int m = nums2.size();
double ans = 0;

    if(n == 0)
    {
        for(int j = 0;j<m;j++)
        {
            merged.push_back(nums2[j]);
        }
    }
    else if( m == 0)
    {
        for(int i = 0;i<n;i++)
        {
            merged.push_back(nums1[i]);
        }
    }
    
    for(int i = 0;i<n;i++)
    {
        merged.push_back(nums1[i]);
    }
    
    for(int j = 0;j<m;j++)
    {
        merged.push_back(nums2[j]);
    }
    
    sort(merged.begin(), merged.end());
    
    double ans1 = merged[merged.size()/2];
    double ans2 = merged[(merged.size()/2) - 1];
    
    if(merged.size() % 2 == 1)
    {
        ans = merged[(merged.size()/2)];
    }
    else if(merged.size() % 2 == 0)
    {
        ans = (ans1 + ans2)/2;
    }
    
    return ans;
}
};