/*
Problem: Number of Students Doing Homework at a Given Time
Link: https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/description/
Description: Given two integer arrays startTime and endTime and given an integer queryTime.

The ith student started doing their homework at the time startTime[i] and finished it at time endTime[i].

Return the number of students doing their homework at time queryTime. More formally, return the number of students where queryTime lays in the interval [startTime[i], endTime[i]] inclusive.
*/

#include<stdio.h>
int busyStudent(int* startTime, int startTimeSize, int* endTime, int endTimeSize, int queryTime) {
    int i=0, count=0;
    for(int i=0; i<startTimeSize; i++) {
        if(queryTime >= startTime[i] && queryTime <= endTime[i]) count++;
    }
    return count;
}
int main() {
    int startTimeSize, endTimeSize, queryTime;
    scanf("%d", &startTimeSize);
    endTimeSize = startTimeSize;
    int startTime[startTimeSize];
    int endTime[endTimeSize];
    for(int i=0; i<startTimeSize; i++) {
        scanf("%d", &startTime[i]);
    }
    for(int i=0; i<endTimeSize; i++) {
        scanf("%d", &endTime[i]);
    }
    scanf("%d", &queryTime);
    printf("%d", busyStudent(startTime, startTimeSize, endTime, endTimeSize, queryTime));
    return 0;
}