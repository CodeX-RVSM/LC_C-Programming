#include<stdio.h>
int main(){
    char str[]="hello";
    int len;
    for(len=0;str[len]!='\0';len++);
    printf("Original String :%s\n",str);

    int start=0,end=len-1;
    while(start<=end){
        char temp=str[start];
        str[start++]=str[end];
        str[end--]=temp;
    }

    printf("reversed String :%s\n",str);


    return 0;
}
