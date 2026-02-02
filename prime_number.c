#include<stdio.h>
int main()
{
    int a=2,num,flag=0;
    printf("Enter A Number :");
    scanf("%d",&num);

    while(a<=num/2){
        if(num%a==0){
            flag=1;
            break;
        }
        a++;
    }
    printf(flag?"Not a Prime Number":"It's a Prime Number.");

    return 0;
}