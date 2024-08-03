class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        if(nums.size() == 1){
            return {nums[0]};
        }
        int j = 0;
        vector <int> vec;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0){
                nums[j] = nums[i];
                j++;
                }
            else if(nums[i] % 2 == 1){
                vec.push_back(nums[i]);
            }
        }
        int k = 0;
        for(int i = nums.size() - 1; i > (nums.size() - 1) - vec.size(); i --){
            nums[i] = vec[k];
            k++;
        }
        
        return nums;
    }
};