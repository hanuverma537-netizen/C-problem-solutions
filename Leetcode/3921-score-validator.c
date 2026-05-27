/*
Problem: Score Validator
Link: https://leetcode.com/problems/score-validator/
Description: You are given a string array events.

Initially, score = 0 and counter = 0. Each element in events is one of the following:

"0", "1", "2", "3", "4", "6": Add that value to the total score.
"W": Increase the counter by 1. No score is added.
"WD": Add 1 to the total score.
"NB": Add 1 to the total score.
Process the array from left to right. Stop processing when either:

All elements in events have been processed, or
The counter becomes 10.
Return an integer array [score, counter], where:

score is the final total score.
counter is the final counter value.
*/

#include<stdio.h>
#include<stdlib.h>
int* scoreValidator(char** events, int eventsSize, int* returnSize) {
    int *arr = malloc(2 * sizeof(int));
    arr[0] = arr[1] = 0;
    for (int i=0; i < eventsSize; i++) {
        if (arr[1] >= 10) break;
        if (events[i][0] == 'N') arr[0]++;
        else if (events[i][0] == 'W') {
            if (events[i][1] == 'D') arr[0]++;
            else arr[1]++;
        }
        else arr[0] += events[i][0] - '0';
    }
    *returnSize = 2;
    return arr;
}
int main() {
    int n;
    scanf("%d", &n);
    char **events = malloc(n * sizeof(char*));
    for (int i = 0; i < n; i++) {
        events[i] = malloc(3 * sizeof(char));
        scanf("%s", events[i]);
    }
    int returnSize;
    int *result = scoreValidator(events, n, &returnSize);
    printf("%d %d", result[0], result[1]);
    for (int i = 0; i < n; i++) {
        free(events[i]);
    }
    free(events);
    free(result);
    return 0;
}