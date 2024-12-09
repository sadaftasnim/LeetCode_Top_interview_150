class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int count = 1 ;
       int  ele = 0 ;
        
       for(int i = 1 ; i < nums.size() ; i++)
       {
          if(nums[i] == nums[ele])
          {
              count++;
          }
           else
           {
               count--;
           }
           if (count == 0)
           {
               ele = i;
               count = 1;
           }
       }

       int majority_ele = nums[ele];
       int cnt = 0;

       for(int i = 0 ; i < nums.size() ; i++)
       {
          if (nums[i] == majority_ele)
          {
            cnt++;
          }
       }

       if(cnt > nums.size()/2)
       {
        return majority_ele;
       }
       else
       {
        return -1;
       }
        
    } 
};