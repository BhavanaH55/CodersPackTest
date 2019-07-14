/*To find factorial of a number*/
#include<stdio.h>
main()
{
	int n,fact,i;
	printf("Enter the number :\n");
	scanf("%d",&n);
	fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("The factorial of the given number is : %d ",fact);
}
