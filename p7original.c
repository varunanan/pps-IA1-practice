#include<stdio.h>
typedef struct _complex
{
    float real;
    float imaginary;
} 
Complex;
Complex input()
{
    Complex t;
    printf("Enter the Real part: ");
    scanf("%f", &t.real);
    printf("Enter the Imaginary part: ");
    scanf("%f", &t.imaginary);
    return t;
}
Complex add(Complex a, Complex b)
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

void output(Complex a, Complex b, Complex sum)
{
    printf("The sum of %0.1f + %0.1fi and %0.1f + %0.1fi is %0.1f + %0.1fi\n", a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}

int main()
{
    Complex t1, t2, sum;
    t1 = input();
    t2 = input();
    sum = add(t1, t2);
    output(t1, t2, sum);
    return 0;
}