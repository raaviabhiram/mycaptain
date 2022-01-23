#include<stdio.h>
int displayPrimeNumber(int x);
int main()
{
	int m,n,i,sum=0;
	printf("enter the value of m ;\n");
	scanf("%d",&m);
	printf("enter the value of n ;\n");
	scanf("%d",&n);
	printf("prime numbers between %d and %d are :\n",m,n);
	for(i=m+1;i<n;++i)
	{
		sum=displayPrimeNumber(i);
		if (sum==0)
		{
			printf("%d",i);
		}
	}
	return 0;
}

int displayPrimeNumber(int x)
{
	int j,sum=0;
	for(j=2;j<=x/2;++j)
	{
		if (x%j==0)
		{
			sum=1;
			break;
		}
	}
	return sum;
}

