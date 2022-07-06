class Solution {
public:
   int majorityElement(vector<int>& nums) {
      // int majorityElement(vector& nums) {
int majority= nums[0];
int n = nums.size();
int count =1;
for(int i=0;i<n;i++)
{

        if(nums[i]==majority)
            count+=1;
        else
        {
            count-=1;
            if(count==0)
            {
                majority=nums[i];
                count =1;
            }
        }
    }
    return majority;
}
};
   