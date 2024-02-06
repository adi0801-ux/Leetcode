func maxProfit(prices []int) int {
    var profit int
    var mini = prices[0]
    for i:=1;i<len(prices);i++{
        cost:=prices[i]-mini
        mini=min(mini, prices[i])
        profit=max(profit, cost)
    }
    return profit
}