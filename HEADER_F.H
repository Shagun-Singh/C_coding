#define Add(a,b) (a+b)
#define Minus(a,b) (a-b)
#define Multiply(a,b) (a*b)
#define Divide(a,b) (a/b)
#define Reminder(a,b) (a%b)
int add(int a,int b)
{
  return Add(a,b);
}
int  minus(int a,int b)
{
  return Minus(a,b);
}

int multi(int a,int b)
{
  return Multiply(a,b);
}
int div(int a,int b)
{
  return Divide(a,b);
}
int rem(int a,int b)
{
  return Reminder(a,b);
}