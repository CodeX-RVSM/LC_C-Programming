#include<stdio.h>
#include<string.h>

int main()
{
    char Username[10]= "admin";
    char Password[10]="admin@123";

    char user[10];
    char pass[10];

    printf("Enter the user name :");
    scanf("%s",user);

    printf("Enter the password :");
    scanf("%s",pass);

    if(strcmp(Username,user)==0){
        if(strcmp(Password,pass)==0){
             printf("Login Successfully");
        }else{
        printf("Incorrect Password .....");
        }
    }
    else{
        printf("Invalid User");
    }

}