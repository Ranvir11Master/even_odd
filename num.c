#include<stdio.h>
// Checking even or odd
//even -> 1
//odd ->0
int main() {
    int x;
    printf("enter a num : ");
    scanf("%d",&x);

    printf("%d\n",x % 2 == 0);
}