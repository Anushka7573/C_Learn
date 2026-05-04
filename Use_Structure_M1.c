#include<stdio.h>
struct std
{
    int roll_no;
    float salary;
};
void main()
{
    struct std s1;
    s1.roll_no = 10;
    s1.salary = 50000.0;
    printf("Roll No: %d\n", s1.roll_no);
    printf("Salary: %.2f\n", s1.salary);
}