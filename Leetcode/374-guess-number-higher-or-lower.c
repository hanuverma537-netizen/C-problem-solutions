/*
Problem: Guess Number Higher or Lower
Link: https://leetcode.com/problems/guess-number-higher-or-lower/
Description: We are playing the Guess Game. The game is as follows:

I pick a number from 1 to n. You have to guess which number I picked (the number I picked stays the same throughout the game).

Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.

You call a pre-defined API int guess(int num), which returns three possible results:

-1: Your guess is higher than the number I picked (i.e. num > pick).
1: Your guess is lower than the number I picked (i.e. num < pick).
0: your guess is equal to the number I picked (i.e. num == pick).
Return the number that I picked.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int pick;

int guess(int n);
int guessNumber(int n){
	int low = 1, high = n;
    int mid;
    while (low <= high) {
        mid = low + ((high - low) / 2);
        if (guess(mid) == 0) return mid;
        else if(guess(mid) > 0) low = mid + 1;
        else high = mid - 1;
    }
    return 0;
}
int main() {
    int n;
    scanf("%d", &n);
    srand(time(NULL));
    pick = (rand() % n) + 1;
    printf("%d\n", pick);
    printf("%d", guessNumber(n));
    return 0;
}
int guess(int n) {
    if (n > pick) return -1;
    if (n < pick) return 1;
    return 0;
}