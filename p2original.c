#include<stdio.h>
void input(int *a,int *b,int *c)
{
  printf("enter the ;\n");
  scanf("%d %d %d",a,b,c);
}
void cmp(int a,int b,int c,int *large)
{
  if(a>b && a>c)
  {
    *large=a;
  }
  else if (b>a && b>c)
  {
    *large=b;
  }
  else
  {
    *large=c;
  }
}
void output(int a,int b, int c,int large)
{
  printf("large value is %d",large);

}
int main()
{
  int a,b,c,large;
  input(&a,&b,&c);
  cmp(a,b,c,&large);
  output(a,b,c,large);
  return 0;
}