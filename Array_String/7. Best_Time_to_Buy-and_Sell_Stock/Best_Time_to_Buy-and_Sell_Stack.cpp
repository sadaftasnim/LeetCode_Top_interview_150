class Solution {
public:
    int maxProfit(vector<int>& prices) {

      int min  = INT_MAX;
      int max_profit = INT_MIN;
      int diff = 0;

      for(int i = 0 ; i < prices.size() ; i++)
      { 
          if(prices[i] < min)
          {
              min = prices[i];
          }

          diff = prices[i] - min ; 

          if(diff > max_profit)
          {
              max_profit = diff;
          }
      }
      return max_profit;
                     
    }
};