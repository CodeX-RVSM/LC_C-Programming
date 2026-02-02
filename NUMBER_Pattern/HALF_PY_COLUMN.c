// #include <stdio.h>

// int main() {
//     printf("HORIZONTAL PRINTER \n");

//     int num =15;
//     printf("Please enter a number:");
//     scanf("%d",&num);

//     for(int i=1;i<=num;i++){
        
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int total, rows;
    printf("Enter total number: ");
    scanf("%d", &total);

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    int num;
    for (int i = 1; i <= rows; i++) {
        num = i; // starting number for each row
        for (int j = 1; j <= i; j++) {
            if (num <= total)
                printf("%d ", num);
            num += rows - j; // next column value
        }
        printf("\n");
    }

    return 0;
}
