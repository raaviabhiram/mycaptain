#include<stdio.h>
void main()
{
	int a,b;
	printf("before swaping the value of a :\n");
	scanf("%d",&a);
	printf("before swaping the value of b :\n");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping a=%d b=%d\n",a,b);
	getch();
}
