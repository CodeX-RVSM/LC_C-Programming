#include<stdio.h>
#include<string.h>

void reverse(char str[],int len){
    //hello
    //olleh
    int start=0,end=len-1;
    while(start<=end){
        char temp=str[start];
        str[start++]=str[end];
        str[end--]=temp;
    }
}


void Uppercase(char str[],int len){
    //hello_woeld--> HELLO
    //abc ----> ABC       88-32
    //97        65    =     32
    for(int i=0;i<len;i++){
        if(str[i] >='a' && str[i]<='z')
        str[i]=str[i]-32;
    }
}

void Lowercase(char str[],int len){
    //hello_woeld--> HELLO
    //abc ----> ABC       88-32
    //97        65    =     32
    for(int i=0;i<len;i++){
        if(str[i] >='A' && str[i]<='Z')
        str[i]=str[i]+32;
    }
}

void reverseWords(char str[],int len){
    int start=0,end;
    for(int i=0;i<=len;i++){
        if(str[i]==' '||str[i]=='\0'){
            end=i-1;
            reverseStr(str,start,end);
            start=i+1;
        }
    }
}

int main(){

    char str[20];
    printf("Enter Name :");
    //scanf("%s",&str);
    fgets(str,29,stdin);
    printf("Hello %s",str);
    int len=strlen(str)-1,flag=1,ch;
    while(flag){
        printf("--------------String operations---------------\n");
        printf("1.reverse a Striing\n");
        printf("2.Display\n");
        printf("3.convert to UpperCase\n");
        printf("4.convert to LowerCase\n");
        printf("5.reverse a words\n");
        printf("6.exit\n");
        printf("Enter your choice :");
        scanf("%d",&ch);
        switch(ch){
            case 1:reverse(str,len);
            case 2:printf("String :%s\n",str);break;
            case 3:Uppercase(str,len);break;
            case 4:Lowercase(str,len);break;
            case 5:reverseWords(str,len);break;
            case 6:flag=0;
            default:printf("Invalid choice !!!!!!");

        }
    }

    return 0;
}
