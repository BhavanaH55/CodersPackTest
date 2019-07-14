/*To take marks in 3 subjects and display their sum and average*/
#include<stdio.h>
main()
{
	int m1=0,m2=0,m3=0;
	float avg=0,sum=0;
	printf("Enter the mark in subject 1 :\n");
	scanf("%d",&m1);
	printf("\nEnter the marks in subject 2 :\n");
	scanf("%d",&m2);
	printf("\nEnter the marks in subject 3 :\n");
	scanf("%d",&m3);
	sum=m1+m2+m3;
	avg=sum/3;
	printf("The sum and average is : %f and %f ",sum,avg);
}
