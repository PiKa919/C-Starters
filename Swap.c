#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp;
    printf("Enter the value of a,b");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("Swapped Values of a,b is %d %d",a,b);
}