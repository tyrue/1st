#include <stdio.h>
typedef struct
{
	double real;
	double img;
} complex;
complex math(complex a,complex b);
int main(void)
{
complex	a={1.0,2.0};
complex	b={2.0,3.0};
	math(a,b);
}
complex math(complex a,complex b)
{
	printf("a=%.4lf+%.4lfi b=%.4lf+%.4lfi\n",a.real,a.img,b.real,b.img);
	printf("´õÇÏ±â= %.4lf+%.4lfi\n",a.real+b.real,a.img+b.img);
	printf("»©±â= %.4lf+%.4lfi\n",a.real-b.real,a.img-b.img);
	printf("°öÇÏ±â= %.4lf+%.4lfi\n",a.real*b.real,a.img*b.img);
	if(a.real<0)
	{
		a.real=a.real*(-1);
	}
	if(b.real<0)
	{
		b.real=b.real*(-1);
	}
	printf("|a|=%.4lf+%.4lfi |b|=%.4lf+%.4lfi\n",a.real,a.img,b.real,b.img);
	return a;
}