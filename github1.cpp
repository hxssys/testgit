#include<Stdio.h>
int isprime(int x);
int geisprime(int x);
int ge2isprime(int x);

int main()
{
	int i;
	int sum = 0;
	int n = 0;
	for(i = 100 ;i < 100000; i++)
	{
	
		if(isprime(i) && geisprime(i) && ge2isprime(i))
		{
			printf("%d\n",i);
			sum += i;
			n++;
		}
		
	}
	printf("%d",sum / n); 
	
	
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
int geisprime(int n)
{
	int sum = 0;
	for(;n != 0;)
	{
		sum += n % 10;
		n = n / 10;
	
	}
	return isprime(sum);
}
int ge2isprime(int n)
{
	int sum = 0;
	for(;n != 0;)
	{
		sum += (n % 10)*(n % 10);
		n = n / 10;	
	}
	return isprime(sum);
	
}
