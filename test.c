#include<stdio.h>

int main()
{
    int age[5],b,high,low;
    float sum,average;

    for(b=0;b<5;b++){
        printf("Enter the age of the  student %d: ",b+1);
        scanf("%d",&age[b]);
    }
    high=age[0];
    low=age[0];

    printf("\nAges entered\n");

    for(b=0;b<5;b++){
        printf("%d\n",age[b]);
        sum+=age[b];
        average=sum/5;
        if(high<age[b]){
            high=age[b];
        }if(low>age[b]){
            low=age[b];
        }
    }printf("sum=%.2f\n  Average=%.2f\n  Oldest=%d\n  Youngest=%d\n",sum,average,high,low);
    return 0;
}
