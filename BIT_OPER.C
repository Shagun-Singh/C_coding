#include<stdio.h>
#include<conio.h>
void main()
{
  unsigned char a,b;
  clrscr();
  printf("Enter 2 positive numbers\n");
  scanf("%d%d",&a,&b);
  printf("%d|%d=%d\n",a,b,a|b);
  printf("%d&%d=%d\n",a,b,a&b);
  printf("~%d=%d\n",a,~a);
  printf("%d<<1=%d\n",b,b<<1);
  printf("%d>>1=%d",b,b>>1);
  getch();
}