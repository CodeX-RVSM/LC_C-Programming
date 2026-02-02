#include<stdio.h>
int main(){
    char str[]="madam";
    int len;
    for(len=0;str[len]!='\0';len++);

    int start=0,end=len-1,flag=1;
    while(start<=end){
        if(str[start]!=str[end]){
            flag=0;
            printf("%s is  Not Pallindrome String",str);
            break;

        }
        
        start++;
        end--;
    }
if(flag){

    printf("%s is  Pallindrome String",str);}
    return 0;
}