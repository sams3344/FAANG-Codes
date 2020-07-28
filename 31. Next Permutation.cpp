class Solution {
public:
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() == 0){
            return intervals;
        }
        
        //So basically what I do in that video is I followed the Nick white video and 

        sort(intervals.begin(), intervals.end());
        vector<vector<int>> result;
        int lastIndex = 0;
        int n = intervals.size();
       
        vector<int> row;
     
        //First I tried to push the the first element of original vector 
        row.push_back(intervals[0][0]);
        row.push_back(intervals[0][1]);
        result.push_back(row);

        int  j=1; // it points to the interval to be compared with.
        int  i=0 ;// it points to the current interval which is to be checked.
        while(j < n){
           //And just as it was taught in the video I will compare this end of this vector to the beginning of the next vector element.
            //if end(of prev vector) > beginning(of the next) after they can be merged. Now Update row(1), ie, end, j++ and move ahead
     //you dont need to use the row variable here but use i variable which points to the current interval to be checked.
           
            if(result[i][1] >= intervals[j][0]){
                //updating result if the intervals are overlaping and not incrementing i as we have to check if current interval overlaps with other intervals.
                result[i][1] = max(result[i][1],intervals[j][1]);            
            }
            else{
                //if current interval doesnt overlap with an interval we increment current interval and update the result with the current interval (that is being compared with)(that is jth interval).
                result.push_back({intervals[j][0],intervals[j][1]});
                i++;
            }
            
            //incrementing j at every iteration as it points to the interval to be compared with.
            j++;
            
            
        }
    
        return result;
    }
};
