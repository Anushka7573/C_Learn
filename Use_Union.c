#include<stdio.h>

union std
{
    int roll_no;
    char name[20];
    float salary;
};
void main()
{
    union std s1;
    // union std *ptr;
    // ptr=&s1;
    // printf("Roll No: %d\n",ptr->roll_no);
    // printf("Salary: %.2f\n",ptr->salary);

    s1.roll_no = 10;
    printf("Roll No: %d\n", s1.roll_no);
    s1.salary = 50000.0;
    printf("Salary: %.2f\n", s1.salary);
}