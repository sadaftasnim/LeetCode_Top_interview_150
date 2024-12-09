class Solution {
public:
    int removeDuplicates(vector<int>& nums){
		
            int insertUniqueEle = 1;

            for(int i = 1 ; i < nums.size() ; i++)
            {
                if(nums[i] != nums[i-1])
                {
                    nums[insertUniqueEle] = nums[i];
                    insertUniqueEle++ ;
                }
                
            }
             
            return insertUniqueEle ;
    }
};