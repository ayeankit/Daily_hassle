class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      int n=nums.size();
        unordered_map<int,int>map;
        
        for(int i=0;i<n;i++){
            if(map[nums[i]]==1){
                return nums[i];
            }
            map[nums[i]]++;
        }
        return 0;}
};