#include<stdio.h>
int main()
{
    int a=1,b=1,n;
    printf("Enter one Number:");
    scanf("%d",&n);

    while(a<=n){
        b=1;

        while(b<=10){
            printf("%d\n",a*b);
            b++;
        }

        printf("\n");
        a++;
    }


    return 0;
}