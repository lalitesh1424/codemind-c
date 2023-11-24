#include<stdio.h>
int main()
{
    int n,d1,d2,sum=0;
    scanf("%d",&n);
    d2=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    d1=n;
    sum=d1+d2;
    printf("%d",sum);
    
}