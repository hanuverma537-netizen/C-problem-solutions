/*
Problem: Find Indices of Stable Mountains
Link: https://leetcode.com/problems/find-indices-of-stable-mountains/description/
Description: There are n mountains in a row, and each mountain has a height. You are given an integer array height where height[i] represents the height of mountain i, and an integer threshold.

A mountain is called stable if the mountain just before it (if it exists) has a height strictly greater than threshold. Note that mountain 0 is not stable.

Return an array containing the indices of all stable mountains in any order.
*/

#include<stdio.h>
#include<stdlib.h>
int* stableMountains(int* height, int heightSize, int threshold, int* returnSize) {
    int count = 0;
    int *result = malloc(heightSize * sizeof(int));
    for(int i=1; i<heightSize; i++) {
        if(height[i-1] > threshold) {
            result[count] = i;
            count++;
        }
    }
    *returnSize = count;
    return result;
}
int main() {
    int heightSize, threshold, returnSize;
    scanf("%d", &heightSize);
    int height[heightSize];
    for(int i=0; i<heightSize; i++) {
        scanf("%d", &height[i]);
    }
    scanf("%d", &threshold);
    int *result = stableMountains(height, heightSize, threshold, &returnSize);
    for(int i=0; i<returnSize; i++) {
        printf("%d ", result[i]);
    }
    free(result);
    return 0;
}