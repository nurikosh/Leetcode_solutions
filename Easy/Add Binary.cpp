class Solution {
public:
    string addBinary(string a, string b) {
        long long x = 0, y = 0;
        
        if(a == "0" && b == "0") return "0";
        for (int i = 0; i < a.size(); i++) {
            if (a[a.size() - 1 - i] == '1') {
                x += pow(2, i);
            }
        }

        for (int i = 0; i < b.size(); i++) {
            if (b[b.size() - 1 - i] == '1') {
                y += pow(2, i);
            }
        }

        
        string res = "";
        
        for(int i = x + y; i > 0; i /=2){
            res = (i % 2 == 0 ? '0' : '1') + res;   
        }
        return res;
        
    }
};