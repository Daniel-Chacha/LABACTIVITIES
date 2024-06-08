#include<stdio.h>
#include<math.h>

float hypotenuse (float H, float B);
int main()
{
    float height, base, K;

    printf("Enter the height of the triangle:");
    scanf("%f",&height);
    printf("Enter the base of the tringle:");
    scanf("%f", &base);

    K =hypotenuse(height,base);
    printf("The hypotenuse is %.2f", K);

    return 0;
}
float hypotenuse(float H, float B)
{
    return sqrt(pow(H,2)+pow(B,2));
}
