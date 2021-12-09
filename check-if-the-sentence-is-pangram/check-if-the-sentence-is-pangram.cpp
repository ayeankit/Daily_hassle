class Solution {
public:
    bool checkIfPangram(string sentence) {
        
//bool checkIfPangram(string sentence) {
        int arr[26]={0};
        for(char x: sentence){
            arr[x-97]++;
        }
        for(auto x : arr){
            if(x == 0){
                return false;
            }
        }
        return true;
    }
};
