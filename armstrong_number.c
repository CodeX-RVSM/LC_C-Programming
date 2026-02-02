#include<stdio.h>
int main()
{
    //153---> COUNT A DIGIT -> 3
    //FETCH A DIGIT --->  1^3  5^3   3^3
    //                    1  + 125 + 27 = 153

    int num,count=0;
    int sum=0;
    printf("Enter one Number :");
    scanf("%d",&num);
    int temp=num;
    //count a digit
    while(num!=0){
    
        count ++;
        num=num/10;
    }
    //fetch a digit
    num=temp;
    while (num!=0)
    {
        int digit= num%10;
        // num=num/10;
        //find apower of digit
        int a=1,pow=1;
        while(a<=count){
            pow=pow*digit;
            a++;
        }
        sum=sum+pow;
        num=num/10;
        
    }    
    printf(temp==sum?"Its a Armstrong Number":"Its not a armstrong Number ");

    return 0;
}