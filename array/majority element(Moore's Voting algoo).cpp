class Solution {
public:
    int majorityElement(vector<int>& nums) {
 
        int majority=nums[0];
        int c=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==majority)
            {
                c++;
            }
            else
            {
                c--;
                if(c==0)
                {
                    c=1;
                    majority=nums[i];
                }
            }
        }
 
      return majority;
    }
};
