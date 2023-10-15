#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if (x<3)
    printf("LIGHT");
    else if (x>=7)
    printf("HEAVY");
    else if (x>=3<7)
    printf("MODERATE");
}