/ To find the area of a triangle given its sides as input using Heron's formula /
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float S,A;
    printf("Length of 1st side");
    scanf("%d",&a);
    printf("Length of 2nd side");
    scanf("%d",&b);
    printf("Length of 3rd side");
    scanf("%d",&c);
S=(a+b+c)/2;
A=sqrt(S*(S-a)*(S-b)*(S-c));
    printf("The area of the triangle is:%0.2f",A);
    return 0;

}
