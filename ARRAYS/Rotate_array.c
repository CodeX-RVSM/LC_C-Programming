#include <stdio.h>

int main() {
    printf("ARRAY ROTATION\n");
    int rotation;
    printf("Please enter the value for rotation:");
    scanf("%d",&rotation);
    int Arthur[] = {1,2,3,4,5,6,7,8,9,10};
    int size_Arthur = sizeof(Arthur)/sizeof(Arthur[0]);

    for(int i = rotation; i < size_Arthur; i++){
        printf("%d ",Arthur[i]);
    }
    for(int j = 0; j < rotation; j++){
        printf(" %d",Arthur[j]);
    }
    return 0;
}