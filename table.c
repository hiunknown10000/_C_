//TABLE OF____
#include <stdio.h>

int main()
{
	int num, from, end;
	printf("TABLE OF ____\n\n");
	printf("Enter a number for the table: ");
	scanf("%d",& num);
	printf("The table start from: ");
	scanf("%d",& from);
	printf("The table end to: ");
	scanf("%d", & end);
	printf("The table of %d is\n\n", num);
	
	

	do{
	     from= from+1;
	     printf("%d*%d=%d\n", num, from,num*from);
	     }while(from<end);
  return 0;
}