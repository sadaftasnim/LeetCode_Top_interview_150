# Max Profit Solution

This repository contains a solution to calculate the maximum profit that can be achieved by buying and selling stocks multiple times, based on given stock prices for different days.

## Code Explanation

The provided solution calculates the total profit by simulating multiple stock transactions (buy and sell). The key idea is to buy the stock whenever the price increases and sell it at a higher price to accumulate profit. The solution does not limit the number of transactions but only ensures that profit is made whenever the price rises.


### Explanation of the Code

1. **Initialization**:
   - We initialize a variable `max_profit` to 0. This will store the total profit from all profitable transactions.

2. **Iterating through the prices**:
   - The loop starts from the second day (`i = 1`) and goes through each day.
   - For each day, we compare the current day's price (`prices[i]`) with the previous day's price (`prices[i - 1]`).
   - If the price on the current day is higher than the price on the previous day (`prices[i] > prices[i - 1]`), we add the difference (`prices[i] - prices[i - 1]`) to `max_profit`. This represents the profit made by buying the stock on the previous day and selling it on the current day.

3. **Return the result**:
   - After processing all days, the function returns the accumulated `max_profit`, which represents the maximum profit that can be made from multiple buy and sell transactions.

### Example

#### Input:
```cpp
vector<int> prices = {1, 7, 5, 3, 6, 4};
```

#### Output:
```cpp
7
```

#### Explanation:
- **Transaction 1**: Buy on day 1 (price = 1), sell on day 2 (price = 7), profit = 7 - 1 = 6.
- **Transaction 2**: Buy on day 4 (price = 3), sell on day 5 (price = 6), profit = 6 - 3 = 3.
- Total profit = 6 + 3 = 7.

### Time Complexity
- **O(n)**: The solution iterates through the `prices` array once. The time complexity is linear, where `n` is the number of days (the size of the prices array).

### Space Complexity
- **O(1)**: The solution uses only a constant amount of space since only a few variables are used to calculate the profit.

