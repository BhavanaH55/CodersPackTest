/*To perform relevant operation using switch case*/
#include<stdio.h>
main()
{
	int choice;
	float c,f;
	do
	{
	printf("Enter your choice :\n1.Celcius to farenheit\n2.Farenheit to celcius\n3.Exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 :printf("\nEnter the temperature in celcius :\n");
		        scanf("%f",&c);
		        f=1.8*c+32;
		        printf("\nThe temperature in farenheit is : %f ",f);
		        break;
		case 2 :printf("\nEnter the temperature in farenheit :\n");
		        scanf("%f",&f);
		        c=5*(f-32)/9;
		        printf("\nThe temperature in celcius is : %f ",c);
		        break;
		case 3 :exit(0);
		        break;
		default :printf("Invalid choice");
	}
	}while(choice<3);
}
