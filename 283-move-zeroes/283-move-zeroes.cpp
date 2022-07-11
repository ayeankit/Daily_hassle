class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int i=0;
        int j=0;
        for(int a=0;a<nums.size();a++){
            if(nums[a] == 0){
                i++;
            }
            else{
                swap(nums[j],nums[i]);
                j++;
                i++;
            }
        } 
        }
        
    };
