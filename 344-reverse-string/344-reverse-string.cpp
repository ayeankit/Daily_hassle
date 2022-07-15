class Solution {
public:
   // void reverseString(vector<char>& s) {
        
   void recursion(vector<char>& s, int len, int i)
    {
        if (i > (len / 2))
            return ;
        swap(s[i], s[len - i]);
        recursion(s, len, i + 1);
    }
    
    void reverseString(vector<char>& s)
    {
        recursion(s, s.size() - 1, 0);
    }
};