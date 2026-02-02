#include<stdio.h>
#include<string.h>

void mystrcpy(char str1[],char str2[]){
    //logic 
    char temp=str2;
    

}

int main(){
    char temp;
    char str1[]="hello";
    char str2[]="world";
    printf("First str: %s\n Second str:%s\n",str1,str2);
    // strcpy(str1,str2);
    mystrcpy(str1,str2);
    printf("First str :%s\n second str : %s",temp,str2);

    return 0;

}