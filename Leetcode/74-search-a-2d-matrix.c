/*
Problem: Search a 2d Matrix
Link: https://leetcode.com/problems/search-a-2d-matrix/description/
Description: You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int mid, low = 0, high = (matrixSize * *matrixColSize) - 1;
    while(low <= high) {
        mid = (low + high) / 2;
        if (matrix[mid / *matrixColSize][mid % *matrixColSize] == target) return true;
        else if(matrix[mid / *matrixColSize][mid % *matrixColSize] < target) low = mid + 1;
        else high = mid - 1;
    }
    return false;
}
int main() {
    int rows, cols, target;
    scanf("%d%d", &rows, &cols);
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            printf("Element[%d][%d]= ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    scanf("%d", &target);
    (searchMatrix(matrix, rows, &cols, target)) ? printf("Found!") : printf("Not found");
    for (int i = 0; i < rows; i++) free(matrix[i]);
    free(matrix);
    return 0;
}