class Solution {
public:
    
    int maxo(int a , int b){
        return (a>b?a:b);
    }
    
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0)
            return 0;
       
        int diff = 0;
        int min = prices[0];
        int max = prices[0];
        
        int mini=0, maxi=0;
        
        for(int j =1; j < prices.size(); j++){
            if(prices[j] < min){
                min = prices[j];
                mini = j;
                cout << min << "++" << mini<< endl;

            }
            int res = prices[j]-min;
            diff = maxo(diff, res);
            cout << diff<< " "<< res << endl;
        }
  
     
            return diff; 
        
    }
};
