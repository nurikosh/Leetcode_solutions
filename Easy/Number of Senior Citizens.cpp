class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(int i = 0;  i < details.size(); i++){
            string a;
            a += details[i][11];
            a += details[i][12];
            if(stoi(a) > 60  ){
                count ++;
            }
        }
        return count;
    }
};