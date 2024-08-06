class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int q = k % n;
        vector <int> res(n, 0);
        
        for(int i = 0;  i < n; i++){
            
            res[(i + k) % n] = nums[i];
        
        }
        
        for (int i = 0; i < n; i++) {
            nums[i] = res[i];
        }
        
    }
};