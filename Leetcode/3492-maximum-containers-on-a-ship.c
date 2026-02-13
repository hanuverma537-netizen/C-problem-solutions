/*
Problem: Maximum Containers on a Ship
Link: https://leetcode.com/problems/maximum-containers-on-a-ship/
Description: You are given a positive integer n representing an n x n cargo deck on a ship. Each cell on the deck can hold one container with a weight of exactly w.

However, the total weight of all containers, if loaded onto the deck, must not exceed the ship's maximum weight capacity, maxWeight.

Return the maximum number of containers that can be loaded onto the ship.

*/

#include<stdio.h>
int maxContainers(int n, int w, int maxWeight) {
    return (n * n <= maxWeight / w) ? (n * n) : (maxWeight / w);
}
int main() {
    int n, w, maxWeight;
    scanf("%d %d %d", &n, &w, &maxWeight);
    printf("%d", maxContainers(n, w, maxWeight));
    return 0;
}