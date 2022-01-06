#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int a[m + 2 * n - 2],b[n];
	int c[m + n - 1];
	int i;
	for(i = 0;i < m + 2 * n - 2;i++)
	a[i] = 0;
	for(i = 0;i < m + n - 1;i++)
	c[i] = 0;
	
	for(i = n - 1;i < m + n - 1;i++)
		{
			scanf("%d",&a[i]);
		}
	for(i = 0;i < n;i++)
	scanf("%d",&b[i]);
		
	for(i = 0;i < m + n - 1;i++)
	{
		int j;
		for(j = 0;j < n;j++)
		{
			c[i] += a[i + j]*b[n - 1 - j];
		}
		printf("%d ",c[i]);
	}
	
	
	
	
	
	
	
 } 
