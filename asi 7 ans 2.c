#include<stdio.h>
int main()
{
int a=-1,b=1,c,n,i;
printf("enter a value for print fibonnaci series");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    c=a+b;
    printf("%d",c);
    a=b;
    b=c;
}
return 0;
}
