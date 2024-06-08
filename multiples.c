//program to find multiples of a number
#include<stdio.h>
int main()

{
    int k,num,answer;
    printf("Enter a number: ");
    scanf("%d",&num);

    for(k=1;k<=25;k++){
        answer=k*num;
        printf("%d x %d = %d\n",k,num,answer);
    }
    return 0;
}

