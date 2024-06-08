//valueinRADIAN =num*(3.142/180)
#include<stdio.h>
#include<math.h>

int main()
{
    float num =45;
    float output , valueinRADIAN;

    valueinRADIAN=num *(3.142/180);
    output =cos(valueinRADIAN);

    printf("%.2f",output);
    return 0;
}
