class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if(arr.size() == 1)
            return {-1};
        int max = arr[arr.size() - 1];
        
        for(int i = arr.size() - 2; i >= 0; i--){
            int temp = arr[i];
            arr[i] = max;
            if(temp > max){
               max = temp;
            }
        }
        arr[arr.size() - 1] = -1;
        return arr;
    }

};