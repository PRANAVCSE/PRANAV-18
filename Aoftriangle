/*Write a program to find the area of triangle given its sides as input using functions*/

#include <stdio.h>
#include<conio.h>
float area(float,float,float,float);
void main()
   {  float a,b,c ,res,s;
      printf("\n Enter the value of sides of triangle=");
      scanf("%f%f%f",&a,&b,&c);
      res=area(a,b,c,s);
      printf("\n Area=%f",res);
      getch();
   }
float area(float A,float B, float C, float S)
   {  float AE;
      S=(A+B+C)/2;
      AE= sqrt(S*(S-A)*(S-B)*(S-C));
      return AE;
   }
