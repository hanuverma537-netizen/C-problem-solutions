/*
Problem: Peak Index in a Mountain Array
Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/
Description: You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.
*/

#include<stdio.h>
#include<stdlib.h>
int peakIndexInMountainArray(int* arr, int arrSize) {
    int mid, low = 0, high = arrSize - 1;
    while(low < high) {
        mid = low + ((high - low) / 2);
        (arr[mid] < arr[mid+1]) ? (low = mid + 1) : (high = mid);
    }
    return low;
}
int main() {
    int arrSize;
    scanf("%d", &arrSize);
    int *arr = malloc(arrSize * sizeof(int));
    for(int i=0; i<arrSize; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d", peakIndexInMountainArray(arr, arrSize));
    return 0;
}