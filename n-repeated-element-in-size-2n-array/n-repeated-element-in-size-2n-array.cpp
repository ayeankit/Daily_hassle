class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
     map<int,int> list;
        
        for(int num: nums) {
            list[num]++;
        }
        
        for(auto val: list) {
            if(val.second == nums.size()/2) return val.first;
        }
        return -1;
    }
 };
