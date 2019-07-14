/*To read an integer and print its multiplication table*/
#include<stdio.h>
main()
{
	int n=0;
	int i=1;
	int r=0;
	printf("Enter the number to print its multiplication table:\n");
	scanf("%d",&n);
	while(i<=10)
	{
		r=n*i;
		
	printf(" \n %d*%d=%d",n,i,r);
		++i;
	}

}
