class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2) return 0;

        vector<int> profits;
        for (size_t i = 0; i < prices.size() - 1; i++)
            profits.push_back(*max_element(prices.begin() + i + 1, prices.end()) - prices[i]);

        int max_profit = (*max_element(profits.begin(), profits.end()) >= 0)
                             ? *max_element(profits.begin(), profits.end())
                             : 0;
        return max_profit;
    }
};
