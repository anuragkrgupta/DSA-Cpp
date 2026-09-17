// Best Time to Buy and Sell Stock — Practice Problem
// You are given an array prices where:
// prices[i] = price of a stock on day i
// You may buy the stock once and sell it once.
// Your goal is to find the maximum profit you can achieve.

// Example 1
// Input:
// prices = [7, 1, 5, 3, 6, 4]
// Output:
// 5

// Explanation:
// Buy on day 2 → price = 1
// Sell on day 5 → price = 6
// Profit = 6 - 1 = 5

// ⚠️ You must buy before you sell.

// Example 2
// Input:
// prices = [7, 6, 4, 3, 1]
// Output:
// 0

// Explanation:
// There is no profitable transaction, so don't buy/sell.

// Constraints
// 1 <= prices.length <= 10^5
// 0 <= prices[i] <= 10^4

int maxProfit(vector<int> &prices)
{
    int minP = INT_MAX;
    int maxP = 0;
    for (int i = 0; i < prices.size(); i++)
    {
       int currentP = prices[i];
       if(currentP < minp){
        minp = currentP;
        }
      int currentProfit = currentP - minP;

      if(maxP < currentProfit){
        maxP = currentProfit;
      }

    }
    return maxP;
}


// You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

// On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can sell and buy the stock multiple times on the same day, ensuring you never hold more than one share of the stock.

// Find and return the maximum profit you can achieve.

// Example 1:
// Input: prices = [7,1,5,3,6,4]
// Output: 7
// Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
// Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
// Total profit is 4 + 3 = 7.


// Example 2:
// Input: prices = [1,2,3,4,5]
// Output: 4
// Explanation: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.
// Total profit is 4.

// Constraints:
// 1 <= prices.length <= 3 * 104
// 0 <= prices[i] <= 104

 int maxProfit(vector<int>& prices) {
        int maxProfit(vector<int>& prices) {
    int minp = INT_MAX;
    int maxP = 0;
    for (int i = 0; i < prices.size(); i++)
    {
       int currentP = prices[i];
       if(currentP < minp){
        minp = currentP;
        }
      int currentProfit = currentP - minp;

      if(maxP < currentProfit){
        maxP = currentProfit;
      }

    }
    return maxP;
    }
}