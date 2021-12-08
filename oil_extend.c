#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{   
	float phr_require,oil_carrier,answer,net_rubber,net_oil;
	printf("\n SBR Oil-Extended");
	printf("\n\n Programmer:Davood Jegarvand");
	printf("\n\n Email:davoodjegarvand@gmail.com");
	printf("\n__________________________________________________");
	printf("\n");
	printf("Please enter the PHR of SBR Oil-Extended:");
	scanf("%f",&phr_require);
	printf("\n");

	oil_carrier=1-0.2727;
	answer=phr_require/oil_carrier;
	net_oil=answer*0.2727;
	net_rubber=answer-net_oil;
	printf("\n__________________________________________________");
	printf("\nSBR Oil-Extended: %.2f PHR",answer);	
	printf("\n");
	printf("\nRubber net: %.2f PHR",net_rubber);
	printf("\nOil net: %.2f PHR",net_oil);
        printf("\n");
	
