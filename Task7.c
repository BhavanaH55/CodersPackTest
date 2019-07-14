/*To check if the given string is palindrome or not*/
#include<stdio.h>
#include<string.h>
main()
{
	char str1[50],str2[50];
	printf("Enter the string :\n");
	gets(str1);
	strcpy(str2,str1);
	strrev(str2);
	if(strcmp(str1,str2)==0)
	{
		printf("\nEntered string is palindrome");
	}
	else
	{
		printf("\nEntered string is not a palindrome");
	}
}
