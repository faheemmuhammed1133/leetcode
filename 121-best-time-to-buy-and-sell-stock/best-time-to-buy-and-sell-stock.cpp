class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> maxValueUntilEnd(n, 0);
        maxValueUntilEnd[n - 1] = prices[n - 1];
        for (int i = 1; i < n; i++) {
            maxValueUntilEnd[n - i - 1] = max(maxValueUntilEnd[n - i], prices[n - i - 1]);
        }
        
        int profit = 0;
        for (int i = 0; i < n - 1; i++) {
            profit = max(maxValueUntilEnd[i + 1] - prices[i], profit);
        }
        return profit;
    }
};