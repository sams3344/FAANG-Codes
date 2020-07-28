class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();          //row
        int m = matrix[0].size();       //clmn 
        cout << n << " " << m;
        vector<int> adr;
        vector<int> adc;
        int i, j ;
        
        for(i =0;i < n ; i++ )
            for(j =0; j<m ;j++){
                if(matrix[i][j] == 0){
                    
                        adr.push_back(i);    // row set to 0
         
                        adc.push_back(j);       //col set ot 0
                    }
            }
    
      
        for(auto rc : adr){
             for(int r =0; r< m ; r++ ){ // colm
                    matrix[rc][r] =0;
             }
        }
       
        for(auto cc : adc){
             for(int s =0; s<n ;s++){
                 //cout << "en";
                    matrix[s][cc] =0;
             }
        }
       
        return ;
    }
};  
