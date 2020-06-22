#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  FILE *fi1,*fi2;
  char c,name[100];
  clrscr();
  printf("Enter filename to read\n");
  scanf("%s",name);
  fi1=fopen(name,"r");
  if(fi1==NULL)
  {
    printf("Can not open file %s\n",name);
    exit (0);
  }
  printf("Enter filename to write\n");
  scanf("%s",name);
  fi2=fopen(name,"r");
  if(fi2==NULL)
  {
    printf("Can not open file %s\n",name);
    exit (0);
  }
  c=fgetc(fi1);
  while(c!=EOF)
  {
    fputc(c,fi2);
    c=fgetc(fi1);
  }
  printf ("Content coppied to%s",name);
  fclose(fi1);
  fclose(fi2);
  getch();
}