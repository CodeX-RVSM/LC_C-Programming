#include<stdio.h>
int main(){
    char str[]="madam";
    int len;
    for(len=0;str[len]!='\0';len++);

    int start=0,end=len-1;
    while(start<=end){
        if(str[start]!=str[end]){
            printf("%s is  Not Pallindrome String",str);
            return 0;
        }
        start++;
        end--;
    }
    printf("%s is  Pallindrome String",str);
    return 0;
}