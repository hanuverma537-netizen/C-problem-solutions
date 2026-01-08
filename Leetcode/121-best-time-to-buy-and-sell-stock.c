/*
Problem: Best time to Buy and Sell Stock
Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock
Description: You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/

#include<stdio.h>
#include<stdlib.h>
int maxProfit(int* prices, int pricesSize) {
    int minPrice = prices[0];
    int maxProfit = 0;
    for (int i = 1; i < pricesSize; i++) {
        if (minPrice > prices[i]) {
            minPrice = prices[i];
        }
        else {
            int profit = prices[i] - minPrice;
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
    }
    return maxProfit;
}
int main() {
    int pricesSize; 
    scanf("%d", &pricesSize);
    int *prices = malloc(pricesSize * sizeof(int));
    for(int i=0; i<pricesSize; i++) {
        scanf("%d", &prices[i]);
    }
    printf("%d", maxProfit(prices, pricesSize));
    return 0;
}