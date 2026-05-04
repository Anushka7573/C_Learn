#include<string.h>
#include<stdio.h>
void main()
{
    char str1[100],str2[100],str3[200];

    printf("Enter the first string:");
    gets(str1); 
    
    printf("Enter the second string:"); 
    gets(str2);
    
    strcat(str1,str2);
    printf("Concatenated string is: %s",str1);
}