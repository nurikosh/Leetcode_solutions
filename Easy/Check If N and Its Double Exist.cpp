class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int j = 0;
        for(int i = 0; i < arr.size(); i++){
            for( j; j < arr.size(); j++){
                if(arr[i] == 2 * arr[j] && i != j){
                    return true;    
                }
            }   
            j = 0;
        }
        return false;
    }
};