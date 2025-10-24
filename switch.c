#include <stdio.h>

int main() {
    int choice;
    
    printf("Enter a number between 1 and 4: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("You chose One.\n");
            break;
        case 2:
            printf("You chose Two.\n");
            break;
        case 3:
            printf("You chose Three.\n");
            break;
        case 4:
            printf("You chose Four.\n");
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
            break;
    }
    
    return 0;
}
