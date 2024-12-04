class Solution {
public:
    int removeDuplicates(vector<int>& nums){
        
        int j = nums.size()-1;
        int k = 0;
        int ans = 0 ;
        int i = 0;
        if(nums.size() == 1)
           return 1;
        for( i = 0 ; i < j ; )
        {
             while(nums[i] == nums[i+1])
              {
               for(k = i ; k < j ; k++)
                 {
                   nums[k] = nums[k+1]; // left shift
                 }
                nums[j] = INT_MIN;
                j-- ;
              }
            if(i < j)
             {
                i++;
             }
        }
            ans = i+1 ;  //return the number of unique elements in nums
            return ans;

     
    }
};