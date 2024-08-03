class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector <int> arr(nums.size() + 1,0);

        for(int i = 0; i < nums.size();i++){
            arr[nums[i]] = 1;
        }
        vector <int> n;
        for(int i = 1; i < nums.size() + 1; i++){
            if(arr[i] == 0){
                n.push_back(i);
            }

        }

        return n;
    }
};