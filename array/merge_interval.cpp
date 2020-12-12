Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover 
all the intervals in the input.

https://leetcode.com/problems/merge-intervals/ 

Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
 

Constraints:

1 <= intervals.length <= 104
intervals[i].length == 2
0 <= starti <= endi <= 104
Accepted

vector<vector<int>> merge(vector<vector<int>>& v) {
       
       vector<vector<int> >res;
       if(v.size()==0)
           return res;
       
        sort(v.begin(),v.end());
         
        int left=v[0][0];
        int right=v[0][1];
        
        for(int i=1;i<v.size();i++)
        {
           auto x=v[i];
          
           if(x[0]<=right)
           {
               right=max(right,x[1]);
           }
            else
            {
                res.push_back({left,right});
                left=x[0];
                right=x[1];
            }
        }
        res.push_back({left,right});  
        return res;
    }
