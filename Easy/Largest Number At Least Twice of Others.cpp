class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = nums[0];
        int second_max = -1000;
        int index = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > max){
                second_max = max;
                max = nums[i];
                index = i;
            }
            else if(nums[i] > second_max)
                second_max = nums[i];
        }
        if(max < second_max * 2)
            return -1;
        else 
            return index;
            
    }
};