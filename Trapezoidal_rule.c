#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x) 
{
 return sqrt(x);
}
void main()
 { 
  float a,b,h,s=0,y=0,x;
  int n,i; 
  printf("Enter the lower limit\n");
  scanf("%f",&a);
  printf("Enter the upper limit\n");
  scanf("%f",&b);
  prinf("Enter the number of intervals\n:");
  scanf("%d",&n);
  h=(b-a)/n; 
  

  for(i=1;i<n;i++)
  {
     x=a+i*h;
     s=s+f(x);
  }
  y=(fn(a)+fn(b)+2*s)*h/2;
  printf("\n the integral is:%f",y);
  getch();
 }
