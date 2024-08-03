class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int res = 0;
        for(int i = 0; i < nums.size(); i++){
            int n = nums[i];
            count = 0;
            while(n){
                n = n/10;
                count ++;
            }
            if(count % 2 == 0){
                res ++;
                }
        }
        return res;
    }
};