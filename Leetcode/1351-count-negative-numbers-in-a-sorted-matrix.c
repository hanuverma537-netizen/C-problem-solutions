/*
Problem: Count Negative Numbers in a Sorted Matrix
Link: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/description/
Description: Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.
*/

#include<stdio.h>
#include<stdlib.h>
int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int count = 0;
    for(int i=0; i<gridSize; i++) {
        for(int j=0; j<*gridColSize; j++) {
            if (grid[i][j] < 0) count++;
        }
    }
    return count;
}
int main() {
    int gridSize;
    scanf("%d", &gridSize);
    int* gridColSize = malloc(gridSize * sizeof(int));
    int** grid = malloc(gridSize * sizeof(int*));
    for (int i = 0; i < gridSize; i++) {
        scanf("%d", &gridColSize[i]);
        grid[i] = malloc(gridColSize[i] * sizeof(int));
        for (int j = 0; j < gridColSize[i]; j++) {
            scanf("%d", &grid[i][j]);
        }
    }
    printf("%d", countNegatives(grid, gridSize, gridColSize));
    return 0;
}