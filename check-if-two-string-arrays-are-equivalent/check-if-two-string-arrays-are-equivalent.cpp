class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
       string res1 ={};
    for(int i=0; i< word1.size(); ++i)
    {
        res1 = (res1 + word1[i]);
    }

    string res2 ={};
    for(int i=0; i< word2.size(); ++i)
    {
        res2 = (res2 + word2[i]);
    }
    
    if(res1 == res2)
        return true;
    else
        return false;
} 
};