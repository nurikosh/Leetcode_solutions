class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        int left_sum = 0;
        
        for(auto i : nums){
            total += i;
        }
        
        for(int i = 0; i < nums.size(); i++){
            
            if(left_sum == total - left_sum - nums[i]){
                return i;
            }
            left_sum += nums[i];
        }
        return -1;
    }
};