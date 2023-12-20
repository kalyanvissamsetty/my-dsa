class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        return money-(prices[1]+prices[0])>=0?money-(prices[1]+prices[0]):money;
    }
};