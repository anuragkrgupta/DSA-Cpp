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
    int minp = INT_MAX;
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