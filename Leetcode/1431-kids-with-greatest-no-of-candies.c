/*
Problem: Kids with the Greatest Number of Candies
Link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
Description: There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.

Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

Note that multiple kids can have the greatest number of candies.
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int max = candies[0];
    bool *result = malloc(candiesSize * sizeof(bool));
    for(int i=1; i<candiesSize; i++) {
        if (candies[i] >= max) max = candies[i];
    }
    for(int i=0; i<candiesSize; i++) {
        (candies[i] + extraCandies >= max) ? (result[i] = true) : (result[i] = false);
    }
    *returnSize = candiesSize;
    return result;
}
int main() {
    int candiesSize;
    int returnSize;
    scanf("%d", &candiesSize);
    int *candies = malloc(candiesSize * sizeof(int));
    bool *result = malloc(returnSize * sizeof(bool));
    for(int i=0; i<candiesSize; i++) {
        scanf("%d", &candies[i]);
    }
    int extraCandies;
    scanf("%d", &extraCandies);
    result = kidsWithCandies(candies, candiesSize, extraCandies, &returnSize);
    for(int i=0; i<returnSize; i++) {
        printf("%s ", result[i] ? "true" : "false");
    }
    return 0;
}