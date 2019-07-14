/*To check if the given number is armstrong or not*/
#include<stdio.h>
main()
{
	int n,sum=0,rem=0,temp,p=0;
	printf("Enter the number :\n");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		temp=temp/10;
		p++;
		
	}
	temp=n;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+pow(rem,p);
		temp=temp/10;
	}
	if(sum==n)
	{
		printf("\n%d  is armstrong number  ",n);
	}
	else
	{
		printf("\n%d is not armstrong number ",n);
	}
}
