/*
Problem: Decode XORed Array
Link: https://leetcode.com/problems/decode-xored-array/description
Description: There is a hidden integer array arr that consists of n non-negative integers.

It was encoded into another integer array encoded of length n - 1, such that encoded[i] = arr[i] XOR arr[i + 1]. For example, if arr = [1,0,2,1], then encoded = [1,2,3].

You are given the encoded array. You are also given an integer first, that is the first element of arr, i.e. arr[0].

Return the original array arr. It can be proved that the answer exists and is unique.
*/

#include<stdio.h>
#include<stdlib.h>
int* decode(int* encoded, int encodedSize, int first, int* returnSize) {
    int *result = malloc((encodedSize + 1) * sizeof(int));
    result[0] = first;
    for(int i=0; i<encodedSize; i++) {
        result[i + 1] = encoded[i] ^ result[i];
    }
    *returnSize = encodedSize + 1;
    return result;
}
int main() {
    int encodedSize, returnSize, first;
    scanf("%d", &encodedSize);
    int encoded[encodedSize];
    for(int i=0; i<encodedSize; i++) {
        scanf("%d", &encoded[i]);
    }
    scanf("%d", &first);
    int *result = decode(encoded, encodedSize, first, &returnSize);
    for(int i=0; i<returnSize; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}