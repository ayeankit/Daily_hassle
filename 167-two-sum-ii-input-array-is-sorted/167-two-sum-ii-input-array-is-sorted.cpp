class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
         //two pointer
        
       int i=0, n=numbers.size();
        int j=n-1;
        while(i<n){
            int val=target-numbers[i];
            if(numbers[j]<val){
                int j=n-1;
                i++;
               // continue;
            }
            if(numbers[j]==val){
                return {i+1,j+1};
            }
            else if(numbers[j]>val){
                j--;
            }
        }
        return {};
    }
};
        
   