#include<stdio.h>
#include<conio.h>
void fun();
void fun()
{
static int y=2;
printf("%d\n",y);
y++;
}
void main()
{clrscr();
printf("Tushar Sharma\n");
fun();
fun();
fun();
getch();
}
