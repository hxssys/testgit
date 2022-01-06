#include<stdio.h>
int f(int n);
int F(int n); 

int main()
{
	int i = 0;
	for(i = 1;i < 10000000;i++)
	{
		if(i == F(i))
		printf("%d\n",i);
	}
	
	
	
	
	return 0;
}

int f(int n)
{
	int times = 0;
	for(;n != 0;)
	{
		if(n % 10 == 1)
		{
			times ++;
		}
		n /= 10;
	}
	return times;
}
int F(int n)
{
	int i = 1;
	int sum = 0;
	for(i = 1;i <= n;i++)
	{
		sum += f(i);
	}
	return sum;
}
