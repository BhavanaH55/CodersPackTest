/*To take the temperature in celcius and convert into farenheit and display it back*/
#include<stdio.h>
main()
{
	float celcius=0,faren=0.0;
	printf("Enter the temperature in celcius :\n");
	scanf("%f",&celcius);
	faren=(1.8*celcius)+32;
	printf("Temperature in farenheit is : %f",faren);
}
