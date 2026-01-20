/*
Problem: Richest Customer Wealth
Link: https://leetcode.com/problems/richest-customer-wealth/description/
Description: You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.
*/

#include<stdio.h>
#include<stdlib.h>
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int max = 0;
    for(int i=0; i<accountsSize; i++) {
        int sum = 0;
        for(int j=0; j<accountsColSize[i]; j++) sum += accounts[i][j];
        if (sum >= max) max = sum;
    }
    return max;
}
int main() {
    int accountsSize;
    scanf("%d", &accountsSize);
    int *accountsColSize = malloc(accountsSize * sizeof(int));
    for(int i=0; i<accountsSize; i++) {
        scanf("%d", &accountsColSize[i]);
    }
    int **accounts = malloc(accountsSize * sizeof(int*));
    for(int i=0; i<accountsSize; i++) {
        accounts[i] = malloc(accountsColSize[i] * sizeof(int));
    }
    for(int i=0; i<accountsSize; i++) {
        for(int j=0; j<accountsColSize[i]; j++) {
            scanf("%d", &accounts[i][j]);
        }
    }
    printf("%d", maximumWealth(accounts, accountsSize, accountsColSize));
    for(int i=0; i<accountsSize; i++) {
        free(accounts[i]);
    }
    free(accounts);
    free(accountsColSize);
    return 0;
}