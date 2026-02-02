#include<stdio.h>
#include<string.h>

void mystrcpy(char str1[],char str2[]){
    //logic 
    // char temp=str2;
    // printf("First str :%s\n second str : %s",temp,str2);
    int len=strlen(str2);
    int i;
    for(i=0;i<len;i++){
        str1[i]=str2[i];
    }
    str1[i]='\0';

}

int main(){

    char str1[]="hello";
    char str2[]="world";
    printf("\nFirst str: %s\n Second str:%s\n",str1,str2);
    // strcpy(str1,str2);
    mystrcpy(str1,str2);
    printf("\nFirst str :%s\n second str : %s",str1,str2);

    return 0;

}