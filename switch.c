#include<stdio.h>
void main()
{
	int number;
	printf("enter a number :\n");
	scanf("%d",&number);
	switch(number)
	{
		case 1:
			printf("Item Sandwitch\n");
			printf("Price Rs.149");
			break;
		case 2:
			printf("Item Burger\n");
			printf("Price Rs.129");
			break;
		case 3:
			printf("Item pizza\n");
			printf("Price Rs.239");
			break;
		case 4:
			printf("Item French Fries\n");
			printf("Price Rs.99");
			break;
		case 5:
			printf("Item Pasta\n");
			printf("Price Rs.179");
			break;
			
		default:
			printf("Please re-enter the number");
	}
	getch();
}
