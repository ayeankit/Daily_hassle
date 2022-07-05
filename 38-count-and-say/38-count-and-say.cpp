class Solution {
public:
    string countAndSay(int n) {
        
   if(n == 1)
    {
       return "1"; 
    }
    
	//By recursion we got the ans of (n-1)th string
    string s = countAndSay(n-1);
    
	//So now, we will find the answer for the given n by using "s" which stores the (n-1)th countAndSay.
	
    string ans ;
	
	//we will check for the times a digit appeared in s and put it in count and a prev to count number of times that digit apeared in a row.
    int count = 1;
    char prev = s[0];
    
	
    for(int i=1; i<s.size(); i++)
    {
	    //if we found the digit repeating we will just increase its count.
        if(prev == s[i])
        {
            count++;
            continue;
        }
        
		//else we will update our answer.
        ans += count + '0' ;
        ans += prev;
        
        prev = s[i];
        count = 1;
    } 
    
    ans += count + '0' ;
    ans += prev;
    
    
    return ans;
    
}
};