class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int sum=0;int multi=1;
    while(n!=0)
    {
        int y=n%10;
        sum=sum+y;
        multi=multi*y;
        n=n/10;
    }
    return (multi-sum);
}
            
            
        };
        
   