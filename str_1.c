#include<stdio.h>


int main(){
    char str[]="hello world";
    int len;
    for(len=0;str[len]!='\0';len++);
    printf("Length  :%d\n",len);

    for(int i=0;i<len;i++){
        printf("%c\n",str[i]);
    }



    return 0;
}
