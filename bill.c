#include<stdio.h>
int main()
{
    int unit;
    int bill;

    printf("Enter the Number of units :");
    scanf("%d",&unit);

    if(unit<=100){
        bill = unit * 2;
    }else if(unit=100&&unit<=200){
        bill = (100*2)+((100-unit)*3);
    }
    else{
        bill =(100*2)+(100*3)+((unit - 200)*5);
    }

    printf("The Electricity bill is : %d",bill);

}
