#include <stdio.h>
#include<math.h>
int main ()
{
	int a=20;
	int b=10;
	int c=50;
	int d=150;
	float e1,e2,e3,e4;
	e1=(a+b)*c/d;
	e2=((a+b)*c)/d;
	e3=(a+b)*(c/d);
	e4=a*b%c/d;
	printf("%f\n",e1);
	printf("%f\n",e2);
	printf("%f\n",e3);
	printf("%f\n",e4);
	return 0;
}
