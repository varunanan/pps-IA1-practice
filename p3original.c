#include<stdio.h>
int input()
{
  int n;
  printf("enter any number:");
  scanf("%d",&n);
  return n;
}
int numb(int n)
{
  int x;
  x=(n*(n+1))/2;
  return x;
}
void output(int x,int n)
{
  int i;
  for(i=1;i<n;i++)
  {
    printf("%d+",i);}
    printf("%d=%d",n,x);
}
int main()
{
  int a,b;
  a=input();
  b=numb(a);
  output(b,a);
  return 0;
}