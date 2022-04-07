#include<stdio.h>
#include<conio.h>

void swap(int *a,int *b)    //Swapping takes place and the values are stored in the variables
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);                                //The number goes up to the address of the variable
    printf("After swapping a=%d and b=%d\n",a,b);
    getch();
}
