class Solution {
public:
    int majorityElement(vector<int>& nums) {
       
       map <int , int> m;
       for(int i = 0 ; i < nums.size()  ; i++)
       {
          m[nums[i]]++;
       }

       for(auto itr : m)
       {
          if(itr.second > (nums.size()/2))
          {
            return itr.first;
          }
       }
       return -1;  
        
    } 
};