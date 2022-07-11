class Solution {
public:
    
    double power(double x, long int n){
        // base call
        if(n==0){
            return 1;
        }
         else if( n<0)
             return power(1/x,-n);
        double ans=power(x,n/2);
        if(n%2==0){
            return ans*ans;
        }
        else{
            return (ans*ans)*x;
        }
        
        
    }
    
    double myPow(double x, int n) {
        
        return power(x,n);
        
    }
};