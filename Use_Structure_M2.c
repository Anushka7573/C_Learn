#include<stdio.h>
struct std
{
    int roll_no;
    char name[20];
    float salary;
};
void main()
{
    struct std s1={10,"Anu",5000.00};
    struct std *ptr;
    ptr=&s1;
    printf("Roll No: %d\n",ptr->roll_no);
    printf("Salary: %.2f\n",ptr->salary);
}