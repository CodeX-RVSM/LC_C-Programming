#include<stdio.h>

int main(){
    char str1[20];
    char str2[20];

    int len,inc;
    
    printf("Enter string 1 and string 2 :");
    scanf("%s%s",str1,str2);

    for(len=0;str1[len]!='\0';len++);

    for(inc=0;str2[inc]!='\0';inc++){
        // printf("\ntest %d",len);
        str1[len]=str2[inc];
        len++;
    }
    str1[len]='\0';
    printf("\nstr is : %s",str1);

    return 0;
}
