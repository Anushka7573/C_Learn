#include<stdio.h>
// step-1 make your own function make 
void display();
void show();

void main()
{
    // step-3 Now here to reserve the call and send your answer 
    show();
    display();
}
// step-2 here you can call your function 
void display()
{
    printf("\nHello!! how are you?");
}
void show()
{
    printf("\nHello I am 2nd function");
}