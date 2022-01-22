class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
    int n1=nums.size();
        int s=0,e=n1-1,mid;
        if(n1==1)
            return 0;
       
        
        while(s<=e){
              mid=s+((e-s)/2);
    if(mid>0&&mid<n1-1){
           
            if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1])
                return mid;//we have to return index of peak element
            else if(nums[mid]<nums[mid-1])//move to right bcoz bigger element is on that side
                e=mid-1;//mid-1 may be the ans but mid+1 not
            else if(nums[mid]<nums[mid+1])
                s=mid+1;//mid+1 may be the ans but mid-1 not
        
                
        }
    else if(mid==0){//handling edge cases
        if(nums[0]>nums[1])
            return 0;
        return 1;
    }
        else if(mid==n1-1){
            if(nums[n1-1]>nums[n1-2])
                return n1-1;
            return n1-2;
        }
    }
       return -1;
        
    }
};