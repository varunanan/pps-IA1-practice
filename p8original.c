#include<stdio.h>
struct _complex
{
 float real,imaginary;
};
typedef struct _complex complex;
int get_n()
{
 int n;
 printf("enter the number of complex number\n");
 scanf("%d",&n);
 return n;
}
complex input_complex()
{
 complex c;
 printf("enter the complex number\n");
 scanf("%f%f", &c.real, &c.imaginary);
 return c;
}
complex input_n_complex(int n,complex c[n])
{
 int i;
 for (i=0;i<n;i++)
 c[i]=input_complex();
}
complex add(complex a,complex b)
{
 complex r;
 r.real=a.real+b.real;
 r.imaginary=a.imaginary+b.imaginary;
 return r;
}
complex add_n_complex(int n, complex c[n])
{
 complex r;
 int i;
 r.real=0;
 r.imaginary=0;
 for(i=0;i<n;i++)
 r=add(r,c[i]);
 return r;
}
void output(int n, complex c[n], complex result)
{
int i;
for(i=0;i<n;i++)
printf("%.2f+ %.2fi\n",c[i].real,c[i].imaginary);
printf("is %.2f + %.2fi\n",result.real,result.imaginary);
}
int main()
{
 int n = get_n();
 complex c[n],result;
 input_n_complex(n,c);
 result=add_n_complex(n,c);
 output (n,c,result);
 return 0;
}