/*To create a structure called book and store the title,author and genre*/
#include<stdio.h>
void read();
void display();
struct book
{
	char title[50];
	char author[50];
	char genre[50];
	
	
};
main()
{
	
	read();
	display();
}
void read()
{

   struct book b;
   printf("Enter the title of the book : \n");
   gets(b.title);
   printf("\nEnter the authors name : \n");
   gets(b.author);
   printf("\nEnter the genre : \n");
   gets(b.genre);
}
void   display()
{
	 struct book b;
	 printf("\nTitle : %s ",b.title);
	 printf("\nAuthor : %s ",b.author);
	 printf("\nGenre : %s ",b.genre);
 }

