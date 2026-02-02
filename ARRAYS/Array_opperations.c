#include <stdio.h>
#define MAX_VALUE 100
int main() {
    printf("ARRAY OPERATIONS \n");
    int arr[MAX_VALUE];
    int size,choice,flag=1;
    printf("Please enter the size of Array:");
    scanf("%d",&size);
    
    printf("Please enter the elements of array:");
    for(int i = 0;i < size; i++){
        scanf("%d",&arr[i]);
    }

    while (flag==1)
    {
       printf("1.DISPLAY THE ARRAY \n"); 
       printf("2.INSERT\n"); 
       printf("3.DELETE\n"); 
       printf("4.UPDATE\n"); 
       printf("5.EXIT\n"); 
       printf("Enter your choice:\n");
       scanf("%d",&choice);

       switch(choice){
        case 1:{
            for(int i = 0;i<size;i++){
                printf("%d ",arr[i]);
            }
            printf("\n");
            break;
        }
        case 2:{
            int loc,element;
            printf("Please enter the location of Array:");
            scanf("%d",&loc);
            printf("Please enter the new element of Array:");
            scanf("%d",&element);
            for (int i = size; i >= loc;i--){
                arr[i] = arr[i - 1];
            }
            arr[loc - 1] = element;
            size++;
            break;            
        }
        case 3:{
            int loc;
            printf("Please enter the location of Array:");
            scanf("%d",&loc);
            for (int i = loc-1; i < size; i++){
                arr[i] = arr[i + 1];
            }
            size--;
            break;            
        }
        case 4:{
            int loc,old_element,element;
            printf("Please enter the element of Array:");
            scanf("%d",&old_element);
            printf("Please enter the new element of Array:");
            scanf("%d",&element);
            for(int i = 0;i<=size;i++){               
                if(arr[i]==old_element){
                     arr[i]=element;
                }
               

            }
            break;
        }
        case 5:{
            flag = 0;
            printf("EXITED SUCCESSFULLY");
            break;
        }
        default :{
            printf("\nWRONG CHOICE TRY AGAIN WITH VALID CHOICE");
            break;
        }
       }
    } 

    return 0;
}