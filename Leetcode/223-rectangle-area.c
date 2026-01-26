/*
Problem: Rectangle Area
Link: https://leetcode.com/problems/rectangle-area/description/
Description: Given the coordinates of two rectilinear rectangles in a 2D plane, return the total area covered by the two rectangles.

The first rectangle is defined by its bottom-left corner (ax1, ay1) and its top-right corner (ax2, ay2).

The second rectangle is defined by its bottom-left corner (bx1, by1) and its top-right corner (bx2, by2).
*/

#include<stdio.h>
int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
    int area_1 = (ax1 - ax2) * (ay1 - ay2);
    int area_2 = (bx1 - bx2) * (by1 - by2);
    int cx1 = (ax1 > bx1) ? ax1 : bx1;
    int cx2 = (ax2 < bx2) ? ax2 : bx2;
    int cy1 = (ay1 > by1) ? ay1 : by1;
    int cy2 = (ay2 < by2) ? ay2 : by2;
    int area_3 = ((cx2 - cx1 > 0) && (cy2 - cy1 > 0)) ? (cx2 - cx1) * (cy2 - cy1) : 0;
    return (area_1 + area_2) - area_3;
}
int main() {
    int ax1, ay1, ax2, ay2, bx1, by1, bx2, by2;
    scanf("%d", &ax1);
    scanf("%d", &ay1);
    scanf("%d", &ax2);
    scanf("%d", &ay2);
    scanf("%d", &bx1);
    scanf("%d", &by1);
    scanf("%d", &bx2);
    scanf("%d", &by2);
    printf("%d", computeArea(ax1, ay1, ax2, ay2, bx1, by1, bx2, by2));
    return 0;
}