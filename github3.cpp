#include<stdio.h>

int isprime(int n);

int main()
{
	int i,j,k,z;
	
	for(i = 1;i < 20;i++)
	{
		if(isprime(i))
		for(j = 1;j < 5;j++)
		{
			if(isprime(j))
			{
				int a = 1,b = 1;
				for(k = 0;k < j;k++)
				a *= i;
				for(k = 0;k < i;k++)
				b *= j;
				if(isprime(a + b))
				printf(" p = %d q = %d a = %d b = %d\n",i,j,a,b);
				
			}
		}
	}
	
	
	
	return 0;
}
int isprime(int n)
{
	
	int i;
	for(i = 2;i < n;i++)
	{
		if(n % i == 0)
		return 0;
		
	}
	return 1;
}
