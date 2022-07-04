// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++





class Solution {
 public:
   int isDigitSumPalindrome(int N) {
       int sum=0;
       
       while(N>0){
           int rem=N%10;
           N=N/10;
           sum = sum+rem;
       }
       int sum1=0;
       int k=sum;
       while(sum>0){
            int rem=sum%10;
           sum=sum/10;
           sum1 = sum1*10+rem;
       }
       if(k==sum1){
           return 1;
       }else{
           return 0;
       }
   }
};
// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}
  // } Driver Code Ends