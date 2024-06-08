#include<stdio.h>
#define pi 3.142

float area(int R);
float circ(int R);
int main()
{
    int r;
    float A,C;
    printf("Enter the radius of the circle: ");
    scanf("%d",&r);

    A=area(r);
    C=circ(r);
    printf("area=%.2f\n",A);

    printf("circumference=%.2f\n",C);
    return 0;
}
float area(int R)
{
    return R*R*pi;
}
float circ(int R)
{
    return 2*R*pi;
}
