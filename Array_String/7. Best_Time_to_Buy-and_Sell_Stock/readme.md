## Approach

This solution uses a **single-pass traversal** to calculate the maximum profit efficiently.

### Steps:

1. **Initialize Variables**:
   - **`min`**: Tracks the minimum stock price encountered so far.  
     - Initial value: `INT_MAX`.
   - **`max_profit`**: Stores the maximum profit observed.  
     - Initial value: `INT_MIN`.
   - **`diff`**: Calculates the difference between the current stock price and the minimum price observed so far.

2. **Iterate Through Prices**:
   - Traverse the array `prices`:
     - If the current price is less than `min`, update `min` to the current price.
     - Calculate the potential profit as `diff = prices[i] - min`.
     - If `diff` (potential profit) is greater than `max_profit`, update `max_profit`.

3. **Return Maximum Profit**:
   - After completing the traversal, return `max_profit`, which holds the highest profit possible from a single buy-sell transaction.

### Complexity:

- **Time Complexity**: `O(n)`  
  - The array is traversed once.
- **Space Complexity**: `O(1)`  
  - Only a constant amount of extra space is used.
