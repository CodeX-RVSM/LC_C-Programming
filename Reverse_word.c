#include<stdio.h>
#include<string.h>

void reverseStr(char str[],int start, int end){

    while(start<=end){
        char temp=str[start];
        str[start++]=str[end];
        str[end--]=temp;
    }
    //hello
    //olleh

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
    char str[]="hello java Programming";
    int len=strlen(str);
    printf("Before Reverse :%s\n",str);
    reverseWords(str,len);
    printf("After Reverse : %s",str);
    return 0;
}