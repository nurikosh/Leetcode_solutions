class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
   
        int j = 1;
        int max = 0;
        for(int i = 0; i < nums.size(); i += 2){
            int mini = min(nums[i],nums[j]);
            max += mini;
            j+=2;
        }
    return max;
    }
};