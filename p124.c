#include<stdio.h>
#include<conio.h>
void main()
{
int a,m,n,m1,d1,y1,m2,d2,y2;
printf("enter the date \n");
scanf("%d%d%d",&y1,&m1,&d1);
scanf("%d%d%d",&y2,&m2,&d2);
m=abs(y1-y2);
n=abs(m1-m2);
if(y1!=y2 || m1!=m2)
{
a=m*12+n;
}
if(y1==y2&&m1==m2)
{
a=m+n;
}
printf("%d",a);
getch();
}
