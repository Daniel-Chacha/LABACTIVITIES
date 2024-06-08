//the first function is for raising into power (POW)
//the second one is for the squareroot
//trigonometric function tan ,cos, sin
#include<stdio.h>
#include<math.h>

int main()
{
    int num =25;
    int output ;
    float output2;
    output =pow(num,3);

    output2 =sqrt(num);

    printf("%d\n",output);
    printf("%.2f\n",output2);
    return 0;
}
