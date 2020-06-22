# include<stdio.h>
# include<dos.h>
# include<conio.h>
int main()
{
int h,m,s;
printf("Enter current time(seperate hour,min,sec by enter)\n");
scanf("%d%d%d",&h,&m,&s);
start: ;
for(;h<24;h++)
{
  for(;m<60;m++)
  {
    for(;s<60;s++)
    {
     printf("%02d:%02d:%02d",h,m,s);
     delay(1000);
     clrscr();
    }
    s=0;
  }
  m=0;
}
h=0;
goto start;
return 0;
}
