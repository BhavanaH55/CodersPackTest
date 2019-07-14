/*To read the first name and last name of user and display their full name*/
#include<stdio.h>
#include<string.h>
main()
{
	char str1[20];
	char str2[20];
	
	printf("Enter your first name :");
	gets(str1);
	printf("\nEnter your last name :");
	gets(str2);
	strcat(str1,str2);
	printf("\nThe full name is :");
	puts(str1);
	
	
}
