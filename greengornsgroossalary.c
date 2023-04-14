#include<stdio.h>

main()
{
	float gs,bs,hra,da,ta;
	
	printf("value of base salary=");
	scanf("%f",&bs);
	
	printf("value of HRA=");
	scanf("%f",&hra);
	
	printf("value of DA=");
	scanf("%f",&da);
	
	printf("value of TA=");
	scanf("%f",&ta);
	
	hra=hra*bs/100;
	da=da*bs/100;
	ta=ta*bs/100;
	gs=bs+hra+da+ta;
	
	printf("groos salary=%f",gs);
	
	
}
