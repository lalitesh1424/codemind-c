#include<stdio.h>
int main()
{
    int ps,ch,bio,math,cs,p;
    scanf("%d%d%d%d%d",&ps,&ch,&bio,&math,&cs);
    p=((ps+ch+bio+math+cs)*100)/500;
    if (p>=90)
    printf("Grade A");
    else if (p>=80 && p<90)
    printf("Grade B");
    else if (p>=70 && p<80)
    printf("Grade C");
    else if (p>=60 && p<70)
    printf("Grade D");
    else if (p>=40 && p<60)
    printf("Grade E");
    else 
    printf("Grade F");
}