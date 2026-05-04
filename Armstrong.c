#include<stdio.h>
void main()
{
    int n, r, sum=0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp != 0)
    {
        r = temp % 10;
        sum += r * r * r;
        temp /= 10;
    }
    if(sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
}