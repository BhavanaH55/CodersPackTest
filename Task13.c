/*To find the smallest and largest element in an array*/
#include<stdio.h>
main()
{
	int n,i,small,large;
	int a[100];
	printf("Enter the number of elements : \n");
	scanf("%d",&n);
	printf("\nEnter the elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	large=a[0];
	for(i=0;i<n;i++)
	{
		if(large<a[i])
		 large=a[i];
	}
	small=a[0];
	for(i=0;i<n;i++)
	{
		if(small>a[i])
		 small=a[i];
	}
	printf("\nThe largest element is : %d ",large);
	printf("\nThe smallest element is : %d ",small);
	
}
