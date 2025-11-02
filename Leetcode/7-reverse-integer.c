#include<stdio.h>
#include<limits.h>
int reverse(int x){
    long r=0, t=x;
    while (t!=0) {
        r = r * 10 + (t % 10);
        if (r > INT_MAX || r < INT_MIN) return 0; 
        t /= 10;     
    }
    return (int)r;
}
int main() {
    int x;
    scanf("%d", &x);
    int revNum = reverse(x);
    printf("%d", revNum);
}