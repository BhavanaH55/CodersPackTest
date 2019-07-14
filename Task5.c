/*To find the reverse of the given number*/
#include<stdio.h>
main()
{
	int n;
	int rev;
	int rem;
	printf("Enter the number : \n");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("The reverse of the given number is :%d",rev);
}
