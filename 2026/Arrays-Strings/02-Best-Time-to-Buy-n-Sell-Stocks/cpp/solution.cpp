#include "solution.hpp"
#include <vector>

int maxProfit(std::vector<int> prices) {

    int max_profit = 0;
    int cheapest_price = prices[0];

    for (std::size_t i = 0; i < prices.size(); ++i) {
        if (prices[i] < cheapest_price) cheapest_price = prices[i];
        if (max_profit < (prices[i] - cheapest_price)) max_profit = prices[i] - cheapest_price;
    }

    return max_profit;
}