class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = 0, mn = prices[0]; 
        for (int i = 0; i < prices.size() - 1; i++) { // O(N)
            mn = min(mn, prices[i]);
            mx = max(mx, prices[i + 1] - mn);
        }
        return mx;
    }
};
