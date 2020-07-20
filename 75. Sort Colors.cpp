class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size()-1;
        int s =0, i=0, e = n;
        
        while(i<=e && s<=e){
            if(nums[i] == 0){
                cout << "en 1" <<endl;
                nums[i] = nums[s];
                nums[s] = 0;
                s++; i++;
            }
            else if(nums[i] == 2){
                nums[i] = nums[e];
                nums[e] = 2;
                e--;
            }else 
                i++;
        }
    }
};
