#include<stdio.h>
int main()
{
    int subjects[9],i,k,below_40=0,check,temp;
    float avg,total,increment,decrement;
    float const red=0.05;
    float const inc=0.1;

    for(k=0;k<9;k++){
        printf("Enter the mark for subjects %d: ",k+1);
        scanf("%d",&subjects[k]);
        total+=subjects[k];
    }
    printf("Total marks:%.2f\n",total);
    avg=total/9;
    printf("Average: %.2f\n",avg);

    if(avg>=70){
        printf("Grade:A\n");
    }if(avg>=60){
        printf("Grade:B\n");
    }if(avg>=50){
        printf("Grade:C\n");
    }if(avg>=40){
        printf("Grade:D\n");
    }else{
        printf("Grade:F\n");
    }
    //counting subjects bellow 40
    for (i=0;i<9;i++){
        if (subjects[i]<40){
            below_40++;
        }
    }printf("Subjects below 40:%d\n",below_40);
    if(below_40==0){
        decrement=total*red;
        total-=decrement;
        printf("Final Marks: %.2f\n",total);
    }if(below_40==0){
        increment=total*inc;
        total+=increment;
        printf("Final Marks: %.2f\n",total);
    }else {
        printf("Final Marks: %.2f\n",total);
    }
    if (below_40==0){
        printf("Recommendation: Proceed to the next level\n");
    }else if (below_40>=1 && below_40<=2){
        printf("Recommendation: Repeat/ carry forward\n");
    }else if (below_40>=3 && below_40<=5){
        printf("Recommendation: Take supplementary exams in failed units\n");
    }else if (below_40>=6 && below_40<=7){
        printf("Recommendation: Repeat the failed units\n");
    }else{
        printf("Recommendation: Discontinue from the course\n");
    }
    //sorting the marks in ascending order

    for(k=0;k<9;k++){
        for(i=k+1;i<9;i++){
            if(subjects[k]<subjects[i]){
                temp=subjects[k];
                subjects[k]=subjects[i];
                subjects[i]=temp;
            }
        }
    }printf("Marks in descending order\n");
    for(k=0;k<9;k++){
        printf("%d\t",subjects[k]);
    }

    return 0;
}
