#include<stdio.h>
#define PI 3.14

int main()
{
    float radius,area;
    printf("tushar Sharma\n") ;
    printf("Enter the radius of circle:\n");
    scanf("%f",&radius);
    area = PI*radius*radius;
    printf("Area of circle:%.2f",area);

    return 0;
}
