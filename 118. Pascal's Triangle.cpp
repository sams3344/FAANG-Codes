class Solution {
public:
    vector<vector<int>> generate(int n) {
        //num = {0};
        
        vector<vector<int>> num;
        if(n ==0 )
            return num;
            
    num.push_back({1});
        if(n ==1){
            return num;
        }
        
        
        for(int k = 1; k<n; k++){
            vector<int> row;
            row.push_back(1);
            int i =1;                
                while(i < k){
                    row.push_back(num[k-1][i-1] + num[k-1][i]);
                    i++;
                }
    
            row.push_back(1);
            num.push_back(row);

        }

        return num;
    }
};
