#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,b,i,temp;
printf("enter 2 num:");
scanf("%d%d",&a,&b);
printf("\n enter range:");
scamf("%d",&n);
for(i=1;i<=n;i++)
{
temp=a+b;
printf("%d",temp);
a=b;
b=temp;
}
}
