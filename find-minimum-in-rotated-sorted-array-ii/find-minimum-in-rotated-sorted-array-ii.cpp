class Solution {
public:
    int findMin(vector<int>& nums) {
        
         int e = nums.size()-1, l = 0, mid;
        while (l <= e) {
            mid = l + (e - l) / 2;
            if (nums[mid] > nums[e]) l = mid + 1;
            else if (nums[mid] < nums[e]) e = mid;
            else e--;
        }
        return nums[l];
    }
};