#include<stdio.h>
int main()
{
    char ch='A';

    for(int i=65;i<=80;i++){
        for(int j=65;j<=i;j++){
            printf("%c",i);
        }
        printf("\n");
    }


}

// A
// BB
// CCC
// DDDD
// EEEEE
// FFFFFF
// GGGGGGG
// HHHHHHHH
// IIIIIIIII
// JJJJJJJJJJ
// KKKKKKKKKKK
// LLLLLLLLLLLL
// MMMMMMMMMMMMM
// NNNNNNNNNNNNNN
// OOOOOOOOOOOOOOO
// PPPPPPPPPPPPPPPP


// #include <stdio.h>
// int main()
// {
//     char ch = 'A';   
    
//     for (int i = 1; i <= 5; i++) {   
//         for (int j = 1; j <= i; j++) {
//             printf("%c", ch);   
//             ch++;             
//         }
//         printf("\n");
//     }

//     return 0;
// }
// A
// BC
// DEF
// GHIJ
// KLMNO
