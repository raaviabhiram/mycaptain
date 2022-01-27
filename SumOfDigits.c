#include<stdio.h>
int sumofdigits(int a);
int main()
{
	int a,sum=0;
	printf("Enter the a :\n");
	scanf("%d",&a);
	sum=sumofdigits(a);
	printf("The sum of digit of %d=%d",a,sum);
	return 0;
}
int sumofdigits(int a)
{
	int result=0,rem=0;
	if(a!=0)
	{
		rem=a%10;
		result=result+rem;
		a/10;
		
	}
	return result;
}
