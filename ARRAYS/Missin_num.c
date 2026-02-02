#include <stdio.h>

int main() {
    printf("MISSING NUMBER FINDER IN ARRAY BETWEEN 1 TO N \n");
    int n,found=0;
    printf("Enter values till you want to check for any missing number:");
    scanf("%d",&n);
    int Thomas[] = {1,2,3,4,5,6,8,9,10};
    int size_Thomas = sizeof(Thomas)/sizeof(Thomas[0]);

    for(int i = 0; i <= n; i++){
        if((i+1)!=Thomas[i]){
            printf("%d Is missing in array \n",i+1);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("\nNo missing elements till yet...");
    }
    return 0;
}