https://leetcode.com/problems/first-missing-positive/submissions/


class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        for(int i=0;i<nums.size();i++)
        {
          
       while(nums[i]>0 && nums[i]<=nums.size() && nums[i]!=nums[nums[i]-1] )//ar[i]!=(i+1) will give infine loop 
            {                                          //eg : 2 2 -2 1 //(2, 2) will keep on swaaping infinitly                                                               time
                swap(nums[i],nums[nums[i]-1]);
            }
             
        }
        for(int i=0;i<nums.size();i++)
        {
            if((i+1)!=nums[i])
                return i+1;
        }
        
        return nums.size()+1;
    }
};
