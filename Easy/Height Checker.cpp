class Solution {
public:
    

    int heightChecker(vector<int>& heights) {
        int count = 0;
        vector <int> nums;
        for(int i = 0; i < heights.size(); i++){
            nums.push_back(heights[i]);
        }
        sort(heights.begin(), heights.end());

        for(int i = 0; i < heights.size(); i++){
            if(heights[i] != nums[i]){
                count ++;
            }
        }
        return count;
    }
};