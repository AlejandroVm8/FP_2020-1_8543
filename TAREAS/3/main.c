#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	float n1,n2;
	n1=atof(argv[1]);
	n2=atof(argv[2]);
	float suma,resta,multiplicacion,division;
	suma=n1+n2;
	resta=n1-n2;
	multiplicacion=n1*n2;
	division=n1/n2;
	printf("%.2f\n",suma);
	printf("%.2f\n",resta);
	printf("%.2f\n",multiplicacion);
	printf("%.2f\n",division);
	return 0;
}
