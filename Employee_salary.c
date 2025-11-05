#include <stdio.h>

int main()
{
    int emp_id, leaves;
    char emp_name[20];
    float emp_salary, per_day_salary, final_salary;

    
    printf("Enter the Employee ID: ");
    scanf("%d", &emp_id);

    printf("Enter the Employee Name: ");
    scanf("%s", emp_name);

    printf("Enter the Monthly Salary: ");
    scanf("%f", &emp_salary);

    printf("Enter the Number of Leaves taken: ");
    scanf("%d", &leaves);


    per_day_salary = emp_salary / 30;   
    final_salary = emp_salary - (leaves * per_day_salary);

    
    printf("\n--- Employee Salary Details ---\n");
    printf("Employee ID     : %d\n", emp_id);
    printf("Employee Name   : %s\n", emp_name);
    printf("Monthly Salary  : %f\n", emp_salary);
    printf("Leaves Taken    : %d\n", leaves);
    printf("Final Salary    : %f\n", final_salary);

    return 0;
}
