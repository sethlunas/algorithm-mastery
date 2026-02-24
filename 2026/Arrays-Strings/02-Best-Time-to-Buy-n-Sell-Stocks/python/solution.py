def maxProfit(prices: list[int]) -> int:

    max_profit = 0 # initialize max_profit to 0
    cheapest_price = prices[0] # initialize cheapest price point of stock to day 1

    for price in prices: # loop thru the array of price of stock
        if price < cheapest_price: # if the price is cheaper than the cheapest price, replace cheapest price
            cheapest_price = price
        if (price - cheapest_price) > max_profit: # if price - cheapest, then replace max_profit
            max_profit = price - cheapest_price 

    return max_profit