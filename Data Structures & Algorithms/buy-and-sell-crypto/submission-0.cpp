class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size() ;
        int minPrice = prices[0], maxprofit = 0 ;
        for (int i = 0 ; i <n ; i++)
        {
            minPrice = min(minPrice , prices[i]) ;
            maxprofit = max (maxprofit , prices[i] - minPrice);
        }
        return maxprofit ;
    }
};
