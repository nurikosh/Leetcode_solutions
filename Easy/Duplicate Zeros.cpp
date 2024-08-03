class Solution {
public:
    void duplicateZeros(std::vector<int>& arr) {
        vector <int> ans;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            ans.push_back(arr[i]);
            if(arr[i] == 0){
                ans.push_back(0);
                n--;
            }
        }
        for(int i = 0; i < arr.size(); i++){
            arr[i] = ans[i];
        }
    }
};