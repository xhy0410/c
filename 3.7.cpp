#include<stdio.h>
int main(void)
{
	float about=32000.0;
	double abet=2.14e9;
	long double dip=5.32e-5;
	
	printf("%f can be written %e\n",about,about);
	printf("and its %a in hexadecimal,powers of 2 notation\n",about);
	printf("%f can be written %e\n",abet,abet);
	printf("%lf can be written %le\n",dip,dip);
	
	return 0; 
}
