#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct n
{
  int data;
  struct n*link;
}*root=NULL;
void add()
{
  struct n*t;
  t=(struct n*)malloc(sizeof(struct n));
  printf("Enter data\n");
  scanf("%d",&t->data);
  t->link=NULL;
  if (root!=NULL)
  {
    struct n*a;
    a=root;
    while(a->link!=NULL)
      a=a->link;
    a->link=t;
  }
  else
    root=t;
}
void dis()
{
  if (root!=NULL)
  {
     struct n*a;
    a=root;
    while(a->link!=NULL)
    {
      a=a->link;
      printf("%d\n",a->data);
    }
  }
  else
    printf("First enter a value\n");
}
void main()
{
  int b=0;
  clrscr();
  do
  {
    printf("Press 1 to add\n");
    printf("Press 2 to display\n");
    printf("Press 0 to quit\n");
    scanf("%d",&b);
    if (b==1)
      add();
    else if (b==2)
      dis();
  }while(b!=0);
  printf("Thank you");
  getch();
}