 class Solution {
public:
    string reverseWords(string s) {
        stack <string> str;
        string word = "";
        string res = "";
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' '){
                if(!word.empty()){
                    str.push(word);
                    word = "";}
                }
            else
                word += s[i];        
        }
        if (!word.empty()) {
            str.push(word);
        }
        
        while (str.size()!= 1) {
            res += str.top() + " ";
            str.pop();
        }
        res+=str.top();
        return res;
        
    }
};