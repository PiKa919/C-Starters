#include<stdio.h>
#include<conio.h>

void main()
{
    char a[100], b[100];

    printf("Enter a string to check if it's a PALINDROME:\n");
    gets(a);

    strcpy(b,a);
    strrev(b); /*Reverse the string*/

    if(strcmp(a,b)==0)
        {
            printf("The string in a Palindrome.\n");
        }
    else
        printf("The string is NOT a Palindrome.\n");

getch();
}