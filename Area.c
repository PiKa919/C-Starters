#include<stdio.h>
#include<conio.h>
#include<math.h>   /*To write mathemaatical functions*/

void main()
{
    float a,b,c,s,A;      //Declaring variables
    char choose;        //To choose the option
    printf("Select the type of Triangle you want to find the Area of:"
            "\n1.Right Angle Triangle --a"
            "\n2.Equilateral Triangle --b"
            "\n3.Isosceles Triangle --c"
            "\n4.Area of a Triangle whose 3 sides are given --d");
    scanf("%c",&choose);

    switch(choose)
    {
        case 'a':
            printf("Enter the height and base of the triangle");
            scanf("%f%f", &a, &b);
            s=0.5*(a*b);
            printf("Area of a triangle is %f",s);
            break;
        case 'b':
            printf("Enter the value of a side of the Equilateral Triangle");
            scanf("%f",&a);
            s=0.433*(a*a);
            printf("Area of a Triangle is %f",s);
            break;
        case 'c':
            printf("Enter the values of base and one side of the Isosceles triangle");
            scanf("%f%f",&a,&b);
            s=(sqrt(4*a*a-b*b)*1/4*b);
            printf("Area of a Triangle is %f",s);
            break;
        case 'd':
            printf("Enter 3 sides of the traingle");
            scanf("%f%f%f",&a,&b,&c);
            s=(a+b+c)/2;
            A=sqrt(s*(s-a)*(s-b)*(s-c));
            printf("Area of a Triangle is %f",A);
            break;
        default:
            printf("Invalid choice");
    }
getch();
}
