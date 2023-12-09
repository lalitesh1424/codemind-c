#include<stdio.h>
int main()
{
    int i,n,x=0,y=1,z=x+y;
    scanf("%d",&n);
    printf("%d %d ",x,y);
    for(i=3;i<=n;i++)
    {
        printf("%d ",z);
        x=y;
        y=z;
        z=x+y;
    }
}