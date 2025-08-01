#include<stdio.h>
int main()
{
	float p,n,r;
	printf("Enter the value of principle amount");
	scanf("%f",&p);
	printf("Enter the value of number of years:\n");
	scanf("%f",&n);
	printf("Enter the rate of interest:\n");
	scanf("%f",&r);
	printf("Simple interest is:%f",((p*n*r)/100));
}

