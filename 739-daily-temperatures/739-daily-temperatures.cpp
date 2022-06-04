class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
 int n=temperatures.size();
        vector<int> ans(n);
        stack<int> st;
        
        // move from right to left
        for(int i=n-1;i>=0;i--)
        {
            // pop until we find next greater element to the right
            while(!st.empty() && temperatures[st.top()]<=temperatures[i]){
                st.pop();
            }
            
            // if stack not empty, then we have some next greater element, 
			// so we take distance between next greater and current temperature
			// as we are storing indexes in the stack
            int res = st.empty() ? 0 : st.top()-i;
            
            ans[i] = res;     // distance between next greater and current
            st.push(i);       // push the index of current temperature in the stack,
        }
        
        return ans;
    }
};