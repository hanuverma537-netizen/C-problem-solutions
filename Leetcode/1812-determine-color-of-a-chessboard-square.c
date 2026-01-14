/*
Problem: Determine Color of a Chessboard Square
Link: https://leetcode.com/problems/determine-color-of-a-chessboard-square/
Description: You are given coordinates, a string that represents the coordinates of a square of the chessboard. Below is a chessboard for your reference.

Return true if the square is white, and false if the square is black.

The coordinate will always represent a valid chessboard square. The coordinate will always have the letter first, and the number second.
*/

#include<stdio.h>
#include<stdbool.h>
bool squareIsWhite(char* coordinates) {
    return ((coordinates[0] + coordinates[1]) % 2 == 0) ? false : true;
}
int main() {
    char* coordinates;
    gets(coordinates);
    (squareIsWhite(coordinates) == true) ? printf("true") : printf("false");
    return 0;
}