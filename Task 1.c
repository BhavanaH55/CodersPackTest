/*To read the name,age and phone number from the user and display them*/
#include<stdio.h>
main()
{
	char name[20];
	int age=0;
	char phonenum[20];
	printf("Enter the name :\n");
	scanf("%s",&name);
	printf("Enter the age :\n");
	scanf("%d",&age);
	printf("Enter  phone number :\n");
	scanf("%s",&phonenum);
	printf(" Name is :%s\n  Age is :%d\n Phone number is :%s ",name,age,phonenum);
}
