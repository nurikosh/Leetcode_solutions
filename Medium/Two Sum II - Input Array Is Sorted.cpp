class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int index1 = 0, index2 = 1;
        int j = numbers.size() - 1;
        for(int i = 0; i < j;){
            if(numbers[i] + numbers[j] == target){
                index1 = i + 1;
                index2 = j + 1;
                return {index1, index2};   
            }
                else if(numbers[i] + numbers[j] > target)
                    j--;
                else
                    i++;

            }
        return {-1,-1};

        }  
    
};