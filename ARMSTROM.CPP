#include<stdio.h>
#include<conio.h>
void main()
{int a,sum=0,n,b;
clrscr();
printf("Tushar Sharma\n");
printf("\n enter number=
");
scanf("%d",&a);
b=a;
while(a>0)
{
n=a%10;
sum=sum+n*n*n;
a=a/10;
}
if(sum==b)
{printf("\n it is an armstrom number");}
else
{printf("\n it is not an armstrom number");}
getch();
}
