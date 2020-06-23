#include<stdio.h>
#include"header_file.h"
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  printf("Enter 2 numbers\n");
  scanf("%d%d",&a,&b);
  printf("%d+%d=%d\n",a,b,add(a,b));
  printf("%d-%d=%d\n",a,b,minus(a,b));
  printf("%d*%d=%d\n",a,b,multi(a,b));
  printf("%d/%d=%d\n",a,b,div(a,b));
  printf("%d/%dreminder=%d\n",a,b,rem(a,b));
  getch();
}