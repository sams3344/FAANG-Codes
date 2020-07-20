class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n= nums.size();
        int max = nums[n-1] ;
        int k = 0, res, i=0;
    
        
        //for(int i=0;i<=nums.size();i++){
        while(i<nums.size()){
            if(k != nums[i]){
                res = k;
                break;
            }
            else 
                k++; i++;
        }
            
        
        return res;
    }
};
