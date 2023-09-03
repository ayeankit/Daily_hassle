class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        string str = "";
        int n = word1.size(), m = word2.size();

        while(i<n or j<m){
            if(i<n){
                str += word1[i];
                i++;
            }
            if(j<m){
                str += word2[j];
                j++;
            }
        }
        return str;
        
    }
};