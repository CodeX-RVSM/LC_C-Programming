#include<stdio.h>

void circle(){
    int radius,area;
    
    printf("Enter a value of radius \n");
    scanf("%d",&radius);

    area=3.14*radius*radius;
    printf("Area of circle is : %d\n",area);

    //pi r^2
    //enter radius and calculate are of circle
}

void triangle(float base,float height){
    float area;
    area= 0.5*base*height;
    printf("Area of triangle is %f\n",area);


    //do something
}

int main()
{
    int ch;
    float base,height;

    do
    {
        printf("\n 1.Area of Circle\n2.Area of Triangle\n");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            circle();
            break;
        
        case 2:
            printf("Enter base and Height:");
            scanf("%f%f",&base,&height);
            triangle(base,height);
            break;
        }

        printf("\n do you want to continue press1 :");
        scanf("%d",&ch);
        
    } while (ch==1);
    
    printf("\nThank You");

    return 0;
}
