#include <stdio.h>
int main ()
{
	int a=20;
	int b=10;
	int c=5;
	int d=15;
	float e1,e2,e3,e4;
	e1=(a+b)*c/d;
	e2=((a+b)*c)/d;
	e3=(a+b)*(c/d);
	e4=a*b%c/d;
	return 0;
}
