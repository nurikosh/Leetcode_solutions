class Solution {
public:
    int lengthOfLastWord(string s) {
        int j = 0;
        int n = s.length() - 1;
        int count = 0;
        while(s[n] == ' '){
            count ++;
            n--;
        }
        for(int i = s.length() - 1 - count; i >= 0; i--){
            if(s[i] == ' '){
                break;
            }                 
            j++;
        }
    return j;
    }
};