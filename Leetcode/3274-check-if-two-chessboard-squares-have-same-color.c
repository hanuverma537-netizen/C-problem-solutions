/*
Problem: Check if Two Chessboard Squares Have the Same Color
Link: https://leetcode.com/problems/check-if-two-chessboard-squares-have-the-same-color/description/
Description: You are given two strings, coordinate1 and coordinate2, representing the coordinates of a square on an 8 x 8 chessboard.

Return true if these two squares have the same color and false otherwise.

The coordinate will always represent a valid chessboard square. The coordinate will always have the letter first (indicating its column), and the number second (indicating its row).
*/

#include<stdio.h>
#include<stdbool.h>
bool checkTwoChessboards(char* coordinate1, char* coordinate2) {
    return (((coordinate1[0] + coordinate1[1]) % 2) == ((coordinate2[0] + coordinate2[1]) % 2)) ? true : false;
}
int main() {
    char coordinate1[4], coordinate2[4];
    fgets(coordinate1, 4, stdin);
    fgets(coordinate2, 4, stdin);
    (checkTwoChessboards(coordinate1, coordinate2) == true) ? printf("true") : printf("false");
    return 0;
}