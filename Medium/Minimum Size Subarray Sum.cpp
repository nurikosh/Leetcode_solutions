class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {\
        int n = nums.size();
        int sum = 0;
        int left = 0;
        int right = 0;
        int res = INT_MAX;
        for(right; right < nums.size(); right++){
            sum += nums[right];
            while ( sum >= target){
                res = min(res, right - left + 1);
                sum -= nums[left];
                left ++;
            }
        }
        res = (res != INT_MAX) ? res : 0;
        return res;

        

        
    }
};