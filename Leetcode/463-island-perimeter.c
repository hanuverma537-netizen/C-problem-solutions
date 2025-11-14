/*
Problem: Island Perimeter
Link: https://leetcode.com/problems/island-perimeter/description/
Description: You are given row x col grid representing a map where grid[i][j] = 1 represents land and grid[i][j] = 0 represents water.

Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells).

The island doesn't have "lakes", meaning the water inside isn't connected to the water around the island. One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.
*/

#include<stdio.h>
#include<stdlib.h>
int islandPerimeter(int** grid, int gridSize, int* gridColSize) {
    int perimeter = 0;
    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridColSize[i]; j++) {
            if (grid[i][j] == 1) {
                if (i == 0 || grid[i-1][j] == 0) perimeter++;
                if (i == gridSize - 1 || grid[i+1][j] == 0) perimeter++;
                if (j == 0 || grid[i][j-1] == 0) perimeter++;
                if (j == gridColSize[i] - 1 || grid[i][j+1] == 0) perimeter++;
            }
        }
    }
    return perimeter;
}
int main() {
    int rows;
    scanf("%d", &rows);
    int* gridColSize = malloc(rows * sizeof(int));
    int** grid = malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        scanf("%d", &gridColSize[i]);
        grid[i] = malloc(gridColSize[i] * sizeof(int));
        for (int j = 0; j < gridColSize[i]; j++) {
            scanf("%d", &grid[i][j]);
        }
    }
    int perimeter = islandPerimeter(grid, rows, gridColSize);
    printf("%d", perimeter);
    for (int i = 0; i < rows; i++) {
        free(grid[i]);
    }
    free(grid);
    free(gridColSize);
    return 0;
}