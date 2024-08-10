class Solution {
public:
     int math(int n, int j){
        long int res = 1;
        
        if(j > n -j){
            j = n -j;
        }
        
        for(int i = 0; i < j; i++){
            res *= (n - i);
            res /= (i + 1);

        }
       return res;
                
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;

        for(int i = 0; i < numRows; i++){
            vector<int> rows;

            for(int j = 0; j < i + 1; j++ ){
                rows.push_back(math(i,j));
            }
            res.push_back(rows);
        }
        return res;
    }
    
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> sol = generate(rowIndex + 1);
        
        return sol[rowIndex];
        
    }
    
   
};