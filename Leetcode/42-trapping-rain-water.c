/*
Problem: Trapping Rain Water
Link: https://leetcode.com/problems/trapping-rain-water/description
Description: Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
*/

#include<stdio.h>
#include<stdlib.h>
int trap(int* height, int heightSize) {
    if (heightSize < 3) return 0;
    int waterFill = 0, max;
    int *maxRight = (int*) malloc(heightSize * sizeof(int));
    int *maxLeft = (int*) malloc(heightSize * sizeof(int));
    maxRight[heightSize-1] = height[heightSize-1];
    maxLeft[0] = height[0];
    for(int i=1; i<heightSize-1; i++) {
        (height[i] >= maxLeft[i-1]) ? (maxLeft[i] = height[i]) : (maxLeft[i] = maxLeft[i-1]);
    }
    for(int i=heightSize-2; i>=1; i--) {
        (height[i] >= maxRight[i+1] ) ? (maxRight[i] = height[i]) : (maxRight[i] = maxRight[i+1]);
    }
    for(int i=1; i<heightSize-1; i++) {
        max = 0;
        if(maxLeft[i] > maxRight[i]) {
            max = maxRight[i];
        }
        else if(maxLeft[i] <= maxRight[i]) {
            max = maxLeft[i];
        }
        waterFill += (max > height[i]) ? (max-height[i]) : 0;
    }
    free(maxRight);
    free(maxLeft);
    return waterFill;
}
int main() {
    int heightSize;
    scanf("%d", &heightSize);
    int *height = malloc(heightSize * sizeof(int));
    for(int i=0; i<heightSize; i++) {
        scanf("%d", &height[i]);
    }
    printf("%d", trap(height, heightSize));
    return 0;
}